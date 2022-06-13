#include<stdio.h>
/*
Fazer um programa que exiba todos os
divisores de um número fornecido pelo
usuário.
*/

void main(){
	//declaração de variáveis
		int n, i;
	//comandos
		printf("Escolha um numero: ");
		scanf("%d", &n);
	//estrutura de repetição
			for(i=1; i<=n; i++)
			{
				if(n%i==0)
				{
					printf("%d\n", i);
				}
			}
	
			
}
