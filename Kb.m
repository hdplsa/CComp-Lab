%% Calcula o kb

% Valores da barra

L = ;
D = ;

% n = numero de slots na barra
n = ; 

alpha = -floor(n/2)*180/pi*D/L:180/pi*D/L:floor(n/2)*180/pi*D/L;

alpha_e = [];

kb = alpha\alpha_e;

figure; hold on;

plot(-floor(n/2):floor(n/2),alpha);
plot(-floor(n/2):floor(n/2),kb*alpha_e);