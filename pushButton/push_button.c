#include <stdio.h>
#include <wiringPi.h>

int main()
{
	wiringPiSetup();            // inicia biblioteca wiringPi
	pinMode(1, OUTPUT);         // configura pino 1 como saida
	pinMode(7, INPUT);          // configura pino 7 como entrada
	pullUpDnControl(7, PUD_UP); // configura resistor pull-up no pino 7
	
	int estadoLED = 0;

	printf("Exemplo 2 - Controle do LED com chave push button\n"); //imprime mensagem na tela
	
	while(1)
	{
		if(digitalRead(7) == LOW)        // detecta se a chave foi pressionada
		{
			estadoLED = !estadoLED;                      // inverte o estado do LED
			digitalWrite(1, estadoLED);                  // controla o LED conforme estado
			if(estadoLED == 1) printf("LED aceso\n");    // imprime estado do LED
			if(estadoLED == 0) printf("LED apagado\n");  // imprime estado do LED
			delay(20);
			while(digitalRead(7) == LOW); // aguarda enquato chave ainda esta pressionada			
			delay(20);
		}	
	}
	return 0;
}
