//Faça um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal 
//e hexadecimal, sendo um em cada linha.
#include <stdio.h>
#include<stdlib.h>
int main(){
	char letra;	
		printf("informe um caracter: ");
		scanf("%c", &letra);	
	system("cls");
		printf("Caractere: %c\nDecimal: %i\nOctal: %o\nHexadecimal: %x", letra, letra, letra, letra);		
return 0;
}
