/*
by knifinha
confere esse tbm
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int verifica (char *v, char *p,int m)
{
	int i,j;
	char a[50];
	for(j=0;j<=m;j++)
	{
		i=0;
		while (v[j]!=' '&&v[j]!='\0')
		{
			a[i]=v[j];
			j++;
			i++;
		}
		a[i]='\0';
		if(strcmp(a,p)==0)
		{
			return j-strlen(p);
		}
	}
	return -1;
}

int main ()
{
	char v[50],p[50];
	int z,m;
	printf("\nInsira a string: ");
	fflush(stdin);
	gets(v);
	printf("\nInsira a palavra a ser procurada na string: ");
	fflush(stdin);
	gets(p);
	m=strlen(v);
	z=verifica(v,p,m);
	printf("\n%i",z);
	return 0;
}
