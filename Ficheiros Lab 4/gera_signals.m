T = 0.02; 
Tmax = 60;
t = (0:T:Tmax)';

u_square = square(2*pi*0.1*t);
u_random = idinput(length(t),'prbs', [0, 0.1]);

u = u_square;

