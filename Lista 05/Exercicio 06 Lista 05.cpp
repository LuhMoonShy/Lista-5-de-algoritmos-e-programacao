//Desenvolva um programa em C que apresente um menu de op��es numa janela �bem� amig�vel ao 
//usu�rio, onde este dever� escolher qual a regi�o do Brasil que ele gostaria de conhecer. Ap�s o usu�rio 
//informar esta regi�o, limpe toda a janela e escreva no meio dela qual foi a op��o do usu�rio. Lembrando 
//que as regi�es dever�o ser apresentadas conforme o seguinte menu de op��es:
//Menu de Op��es
//============
//1 � Norte
//2 � Nordeste
//3 � Centro-Oeste
//4 � Sudeste
//5 � Sul
//0 � Sair do programa
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha;
		printf("________________________________________________________________________________________________________\n");	
		printf("---------------------------|Qual das regi�es abaixo voc� gostaria de visitar?|--------------------------\n");
		printf("________________________________________________________________________________________________________\n");
		printf("________________________________________|MENU DE OP��ES|________________________________________________\n");
		printf("________________________________________________________________________________________________________\n");
		printf("\n        |1- Norte| |2- Nordeste| |3- Centro-Oeste| |4-Sudeste| |5- Sul| |0- Sair do programa|         \n");
		printf("________________________________________________________________________________________________________\n");
		printf("\nInforme o n�mero da regi�o desejada: ");
		scanf("%d", &escolha);	
		while(escolha != 0){
		 system ("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			switch(escolha){
				case 1: printf("\t\t\t\t\tVoc� escolheu a regi�o: Norte!!"); 
					break;
				case 2: printf("\t\t\t\t\tVoc� escolheu a regi�o: Nordeste!!");
					break;
				case 3: printf("\t\t\t\t\tVoc� escolheu a regi�o: Centro-Oeste!!"); 
					break;
				case 4: printf("\t\t\t\t\tVoc� escolheu a regi�o: Sudeste!!"); 
					break;
				case 5: printf("\t\t\t\t\tVoc� escolheu a regi�o: Sul!!"); 
					break;
			}
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		 break;	
		}	
return 0;
}
