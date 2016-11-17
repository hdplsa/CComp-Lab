%Note: Observer has to be 2-10 times faster than controller

% Controlador
% Note: high p, fast response
p = 1;

Q = C'*C;
R = 1/p;
K = dlqr(A, B, Q, R);

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