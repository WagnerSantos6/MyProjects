#include <stdio.h>
#include <locale.h>


int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	
	printf("\n Digite um n�mero: ");
	scanf ("%f", &c);
	
	
	if (c >= 0)
	{
		a = c;
		printf ("\n esse n�mero � positivo");
    }
	else
	{
	    b = c;
	   
		printf ("\n esse n�mero � negativo");
    }
	return 0;
}
