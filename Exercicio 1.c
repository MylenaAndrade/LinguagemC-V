#include<stdio.h>
/*
Dado um n�mero inteiro N, fazer um
programa que exiba os n�meros pares
iguais ou inferiores a N.
*/

void main(){
	//declara��o de vari�veis
		int n, i;
	//comandos
		printf("Escolha um numero: ");
		scanf("%d", &n);
	//estrutura de repeti��o
			for(i=2; i<=n; i++)
			{
				if(i%2==0)
				{
					printf("%d\n", i);
				}
			}
}
