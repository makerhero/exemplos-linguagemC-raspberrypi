#include <stdio.h>
#include <wiringPi.h>

int main()
{
	wiringPiSetup();    // inicia a biblioteca WiringPi
	pinMode(1, OUTPUT); // configura o pino 1 como saída

	printf("Exemplo 1 - Pisca LED\n"); //imprime mensagem na tela
	
	while(1)
	{
		digitalWrite(1, HIGH); // liga o pino 1
		delay(1000);           // espera 1 segundo
		digitalWrite(1, LOW);  // desliga o pino 1
		delay(1000);		 //  espera 1 segundo
	}
	return 0;
}
