#include<stdio.h>
/*
Dado um número inteiro N, fazer um
programa que exiba os números pares
iguais ou inferiores a N.
*/

void main(){
	//declaração de variáveis
		int n, i;
	//comandos
		printf("Escolha um numero: ");
		scanf("%d", &n);
	//estrutura de repetição
			for(i=2; i<=n; i++)
			{
				if(i%2==0)
				{
					printf("%d\n", i);
				}
			}
}
