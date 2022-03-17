#include <stdio.h>

int main (void)
{
	float notas [10];
	
	float soma = 0;
	
	printf ("\n exemplo de inicializacao dinamica de vetor");
	printf ("\n------------------------------------------------------------");
	
	for (int indice = 1; indice <= 10; indice++)
	{
		printf ("\n Informe a nota %d = ", indice);
		scanf ("%f", &notas[indice]);
	}
	for (int linha = 1; linha <= 10; linha++)
	{
		soma = soma + notas[linha];
	}
	
	printf ("\n A media das notas e: %.2f", (soma / 10));
    
	return 0;
}
