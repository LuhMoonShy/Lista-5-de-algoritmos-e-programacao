//Desenvolva um programa em C que apresente um menu de opções numa janela “bem” amigável ao 
//usuário, onde este deverá escolher qual a região do Brasil que ele gostaria de conhecer. Após o usuário 
//informar esta região, limpe toda a janela e escreva no meio dela qual foi a opção do usuário. Lembrando 
//que as regiões deverão ser apresentadas conforme o seguinte menu de opções:
//Menu de Opções
//============
//1 – Norte
//2 – Nordeste
//3 – Centro-Oeste
//4 – Sudeste
//5 – Sul
//0 – Sair do programa
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha;
		printf("________________________________________________________________________________________________________\n");	
		printf("---------------------------|Qual das regiões abaixo você gostaria de visitar?|--------------------------\n");
		printf("________________________________________________________________________________________________________\n");
		printf("________________________________________|MENU DE OPÇÕES|________________________________________________\n");
		printf("________________________________________________________________________________________________________\n");
		printf("\n        |1- Norte| |2- Nordeste| |3- Centro-Oeste| |4-Sudeste| |5- Sul| |0- Sair do programa|         \n");
		printf("________________________________________________________________________________________________________\n");
		printf("\nInforme o número da região desejada: ");
		scanf("%d", &escolha);	
		while(escolha != 0){
		 system ("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			switch(escolha){
				case 1: printf("\t\t\t\t\tVocê escolheu a região: Norte!!"); 
					break;
				case 2: printf("\t\t\t\t\tVocê escolheu a região: Nordeste!!");
					break;
				case 3: printf("\t\t\t\t\tVocê escolheu a região: Centro-Oeste!!"); 
					break;
				case 4: printf("\t\t\t\t\tVocê escolheu a região: Sudeste!!"); 
					break;
				case 5: printf("\t\t\t\t\tVocê escolheu a região: Sul!!"); 
					break;
			}
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		 break;	
		}	
return 0;
}
