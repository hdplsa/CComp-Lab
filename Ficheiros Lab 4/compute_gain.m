Q = eye(4);
R = 1;

K = dlqr(A, B, Q, R);
M = dlqe(A, eye(4), C, eye(4), 1);

N = inv([A-eye(4,4), B; C, 0])*[zeros(4,1);1];
Nx = N(1:4,:);
Nu = N(5, :);

Nbar = Nu+K*Nx;