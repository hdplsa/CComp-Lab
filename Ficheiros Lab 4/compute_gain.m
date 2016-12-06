close all;
% Obt?m os valores do sistema

load('parameters.mat');

%Note: Observer has to be 2-10 times faster than controller

% Controlador
% Note: high p, fast response
p = 1;

Q = C'*C;
R = 1/p;
K = dlqr(A, B, Q, R);

eig(A-B*K)

% Observador
% Note: high pe, fast response
pe = 100;

G  = B;
Qw = 1;
Rw = 1/pe;
M  = dlqe(A, G, C, Qw, Rw);

N = inv([A-eye(4,4), B; C, 0])*[zeros(4,1);1];
Nx = N(1:4,:);
Nu = N(5, :);

Nbar = Nu+K*Nx;

% Vamos gerar os sinais a apliar na simula??o

gera_signals;

% Simula o sistema+controlador em simulink

sim('test_controler');

figure; hold on;
plot(test_controller.time,test_controller.signals.values(:,1));
plot(test_controller.time,test_controller.signals.values(:,2));
legend('System+Controller','Ref');

figure;
plot(test_controller.time,test_controller.signals.values(:,3));
legend('Controlo');


