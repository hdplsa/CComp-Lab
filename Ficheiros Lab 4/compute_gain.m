close all;
% Obt?m os valores do sistema

load('parameters.mat');

% Vamos gerar os sinais a apliar na simula??o

gera_signals;

u = 30*u;

Ke = -3.922;
Kp = 34.453;

%Note: Observer has to be 2-10 times faster than controller

% Controlador
% Note: high p, fast response
p = 0.01;  %-> Instavel para maior de 0.01 no REAL

Q = C'*C;
R = 1/p;
K = dlqr(A, B, Q, R);

eig(A-B*K)
max(1-abs(eig(A-B*K)))*25

% Observador
% Note: high pe, fast response
pe = 200;

G  = B;
Qw = 1;
Rw = 1/pe;
M  = dlqe(A, G, C, Qw, Rw);

eig(A-M*C)
max(1-abs(eig(A-M*C)))*25

N = inv([A-eye(4,4), B; C, 0])*[zeros(4,1);1];
Nx = N(1:4,:);
Nu = N(5, :);

Nbar = Nu+K*Nx;

% Simula o sistema+controlador em simulink

sim('model',30);

figure; hold on;
plot(yout(:,1),yout(:,2));
plot(uout.time,uout.values(:,2));
legend('System+Controller','Ref');

% figure;
% plot(test_controller.time,test_controller.signals.values(:,3));
% legend('Controlo');


