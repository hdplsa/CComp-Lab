close all;

trash_time = 10;

% Vari?veis do lab 1

Ke = -3.922;
Kp = 34.453;

T = 0.02;
% Obt?m os dados do ficheiro

%nome = input('Nome do ficheiro?');

%open(nome);

t_reg = ScopeData.time(trash_time/T:end);
sigs = ScopeData.signals.values;

% Verificar se os numeros das colunas est?o bem!!

utrend = sigs(trash_time/T:end,1); % Entrada - Input signal
thetae = sigs(trash_time/T:end,2); % Potenci?metro - Potentiometer signal
alphae = sigs(trash_time/T:end,3); % Extens?metro - Starin gage signal

figure;
subplot(3,1,1);

plot(t_reg,utrend);
title('Sinal de entrada');
ylabel('U (V)');
xlabel('t (sec)');
xlim([10 20]);

subplot(3,1,2);

plot(t_reg,thetae);
title('Valor do potenci?metro');
ylabel('theta (degree)');
xlabel('t (sec)');
xlim([15 25]);

subplot(3,1,3);

plot(t_reg,alphae);
title('Valor do extens?metro');
ylabel('alpha (degree)');
xlabel('t (sec)');
xlim([15 25]);

% Reconstru??o ?ngulo total da barra ? Computation of total bar angle
ytrend = thetae*Kp + alphae*Ke;

% Filtragem seguida de elimina??o de tend?ncias % Filtering and detrending

af = 0.8;
Afilt = [1 -af];
Bfilt = (1-af)*[1 -1];

yf = filter(Bfilt,Afilt,ytrend);


% Remove a m?dia do sinal

u = detrend(utrend);

% ARMAX

z = [yf u];
na = 3; % AR part
nb = 3; % X part
nc = na; % MA part
nk = 1; % Atraso puro ? pure delay
nn = [na nb nc nk];
th = armax(z,nn) % th is a structure in identification toolbox format

% Extrair o polin?mio obtido no ARMAX

[den1,num1] = polydata(th);

% Simular o modelo

yfsim = filter(num1,den1,u); % Equivalent to idsim(u,th);

figure; hold on;
plot(t_reg,yf);
plot(t_reg,yfsim);
xlim([15 25]);
xlabel('Tempo [s]');
ylabel('Velocidade Angular [degree/s]');
legend('Sistema Real', 'Sistema Ajustado','Location','SouthEast');
box on;
set(gca,'XTick',15:1:25); 

% Converte modelos com delay para modelos com avan?o

[num,den] = eqtflength(num1,conv(den1,[1 -1]));

% Obt?m o state model

[A,B,C,D] = tf2ss(num,den);

y_hat = dlsim(A,B,C,D,utrend);

figure; hold on;
plot(t_reg, ytrend);
plot(t_reg, y_hat);
xlim([15 25]);

