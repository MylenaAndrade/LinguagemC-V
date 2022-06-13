#include<stdio.h>
/*
Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.
*/

void main(){
	//declaração de variáveis
		int n, i, soma;
	//comandos
		printf("Escolha um numero: ");
		scanf("%d", &n);
	//estrutura de repetição
			for(i=1; i<=n; i++)
			{
				soma+=i;
			}
	//mostrando o resultado
		printf("A soma e: %d", soma-1);	
			
}
