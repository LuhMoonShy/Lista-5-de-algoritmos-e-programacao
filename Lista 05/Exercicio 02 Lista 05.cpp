//Desenvolva um programa em C que leia tr�s valores num�ricos e apresente o maior valor informado no 
//meio de uma janela limpa.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num[3];	
		for(int i=0;i<3;i++){
			printf("Informe o n�mero %d:\n",i+1);
			scanf("%d", &num[i]);
		}	
		if(num[0]>num[1]&&num[0]>num[2]){
		system ("cls");
			printf("O maior n�mero �: %d", num[0]);	
		}			
		else if(num[1]>num[0]&&num[1]>num[2]){
		system ("cls");
			printf("O maior n�mero �: %d", num[1]);
		}		
		else{
		system ("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t\t\tO maior n�mero �: %d", num[2]);
		} 					
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
return 0;
}
