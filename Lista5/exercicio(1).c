/*
by facoso
n esquece de testar
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void preenche (char m[][7], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nInsira os nomes: ");
		gets(m[i]);
	}
}

int main ()
{	
	char m[12][7];
	int n;
	printf("Insira os numero de nomes a ser inserido: ");
	scanf("%i",&n);
	preenche(m,n);
	return 0;	
}
