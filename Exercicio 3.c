#include<stdio.h>
/*
Fazer um programa que exiba todos os
divisores de um n�mero fornecido pelo
usu�rio.
*/

void main(){
	//declara��o de vari�veis
		int n, i;
	//comandos
		printf("Escolha um numero: ");
		scanf("%d", &n);
	//estrutura de repeti��o
			for(i=1; i<=n; i++)
			{
				if(n%i==0)
				{
					printf("%d\n", i);
				}
			}
	
			
}
