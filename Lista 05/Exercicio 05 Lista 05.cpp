//Fa�a um programa que pergunte ao usu�rio qual a letra inicial do seu sexo (masculino/feminino) e 
//escreva por extenso o sexo informado, usando o operador condicional tern�rio.
#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>
int main(){
	char letra;	
		printf("Informe a letra inicial do seu sexo M ou F: ");
		scanf("%c", &letra);
		letra=toupper(letra);
	system("cls");	
		letra=='M'?printf("Sexo Masculino!"):printf("Sexo Feminino!");
return 0;
}
