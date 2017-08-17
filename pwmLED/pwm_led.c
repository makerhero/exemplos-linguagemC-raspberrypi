#include <stdio.h>
#include <wiringPi.h>

int main()
{
	wiringPiSetup();        // inicia a biblioteca WiringPi
	pinMode(1, PWM_OUTPUT); // configura o pino 1 como saída PWM

	int i; // declara variável para o loop for
	
	printf("Exemplo 3 - Controlando LED por PWM\n"); //imprime mensagem na tela
	
	while(1)
	{
		for(i=0;i<=1024;i+=4)  // faz um loop mudando valor de i de 0 a 1024 com um passo de 4
		{
			pwmWrite(1, i); // escreve 0-1024 a cada iteração
			delay(3);
		}
		for(i=1024;i>=0;i-=4) // faz um loop mudando valor de i de 1024 a 0 com um passo de 4
		{
			pwmWrite(1, i); // escreve 1024-0 a cada iteração
			delay(3);
		}					
	}
	return 0;
}

