close all;
% Obtem os valores do sistema

load('../parameters.mat');

run('../gera_signals.m');

u = u*45;

An = [A B; zeros(1,size(A,2)), 1];
Bn = [zeros(size(A,1),1); 1];
Cn = [C, 0];
Dn = 0;

% Controlador
% Note: high p, fast response
p = 10;

Q = C'*C;
R = 1/p;
Kn = dlqr(A, B, Q, R);

%Ki = Kn(5);
K = Kn(1:4);

% Observador
% Note: high pe, fast response
pe = 100;

G  = B;
Qw = 1;
Rw = 1/pe;
Mn  = dlqe(A, G, C, Qw, Rw);

% Ganho

N = inv([A-eye(4,4), B; C, 0])*[zeros(4,1);1];
Nx = N(1:4,:);
Nu = N(5, :);

Nbar = Nu+Kn*Nx;

Ki = Nbar;

Nbar = 0;

eig(A-B*K)

sim('test_controler',30);

figure; hold on;
plot(test_controller.time,test_controller.signals.values(:,1));
plot(test_controller.time,test_controller.signals.values(:,2));
legend('System+Controller','Ref');

% figure;
% plot(test_controller.time,test_controller.signals.values(:,3));
% legend('Controlo');