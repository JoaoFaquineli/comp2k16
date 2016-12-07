/*
by faquinha
confere saporra ae
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void retira (char *v,int pos,int n)
{
	int z,i,j;
	printf("\nInsira a string: ");
	fflush(stdin);
	gets(v);
	z=strlen(v);
	j=z-(n+pos);
	for(i=0;i<=z;i++)
	{
		v[pos]=v[z-j+i];
		pos++;
	}
	printf("%s",v);
}

int main ()
{
	char v[50],n,pos;
	printf("\nInsira qual posicao sera iniciada: ");
	scanf("%i",&pos);
	printf("\nInsira quantos caracteres serao retirados: ");
	scanf("%i",&n);
	retira(v,pos,n);
	return 0;
	
}
