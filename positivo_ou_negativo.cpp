#include <stdio.h>
#include <locale.h>


int main (void)
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	
	printf("\n Digite um número: ");
	scanf ("%f", &c);
	
	
	if (c >= 0)
	{
		a = c;
		printf ("\n esse número é positivo");
    }
	else
	{
	    b = c;
	   
		printf ("\n esse número é negativo");
    }
	return 0;
}
