structure = test_controller; 

t_values = structure.time(150:400,1)/T;
log_values = log(abs(structure.signals.values(150:400,1)));

figure;
plot(t_values, log_values);

res = polyfit(t_values, log_values, 1);
lambda = abs(exp(res(1)));

pole = lambda*(1/T)/2