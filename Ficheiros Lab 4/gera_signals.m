T = 0.02; 
Tmax = 60;
t = (0:T:Tmax)';

u_square = square(2*pi*0.15*t);
u_random = idinput(length(t),'prbs', [0, 0.02]);
u_sine = sin(2*pi*20*t);

u = u_sine;

