close all;
% Obtem os valores do sistema

load('../parameters.mat');

run('../gera_signals.m');

u = 10*u;

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

Ki = 0.15;

sim('copy_of_test_controler_int',30);

figure; hold on;
plot(test_controller.time,test_controller.signals.values(:,1));
plot(test_controller.time,test_controller.signals.values(:,2));
legend('System+Controller','Ref');

% figure;
% plot(test_controller.time,test_controller.signals.values(:,3));
% legend('Controlo');