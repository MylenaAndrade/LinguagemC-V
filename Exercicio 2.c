#include<stdio.h>
/*
Desenvolver um programa que calcule a
soma dos n�meros de 1 a N, sendo N um
n�mero inteiro fornecido pelo usu�rio.
*/

void main(){
	//declara��o de vari�veis
		int n, i, soma;
	//comandos
		printf("Escolha um numero: ");
		scanf("%d", &n);
	//estrutura de repeti��o
			for(i=1; i<=n; i++)
			{
				soma+=i;
			}
	//mostrando o resultado
		printf("A soma e: %d", soma-1);	
			
}
