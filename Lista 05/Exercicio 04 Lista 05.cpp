//Uma loja de m�veis de inform�tica est� necessitando de um sistema que identifique quais m�veis de 
//inform�tica est�o sendo solicitados pelos seus clientes. Os m�veis disponibilizados por esta empresa s�o: 
//1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando 
//se tratar de um m�vel que n�o exista na empresa informe ao cliente que ainda n�o est� dispon�vel.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int resultado,cadeira=0,mesaComputador=0,estanteLivro=0,mesaImpressora=0,estanteCD=0,contador=0;	
		do{
			printf("\nInforme o n�mero corresponte ao produto ao que voc� deseja.Contagem de Produtos = %d.\n", contador);
			printf("\n1- Cadeira.");
			printf("\n2- Mesa de Computador.");
			printf("\n3- Estante de Livros.");
			printf("\n4- Mesa de Impressora.");
			printf("\n5- Estante de CD.");
			printf("\n6- Continuar para verificar��o...\n");
			scanf("%d",&resultado);
			switch(resultado){
			case 1:
				cadeira++;
				contador++;
				break;	
			case 2:
				mesaComputador++;
				contador++;
				break;
			case 3:
				estanteLivro++;
				contador++;
				break;
			case 4:
				mesaImpressora++;
				contador++;
				break;
			case 5:
				estanteCD++;
				contador++;
				break;
			case 6:
				break;
			default:
				printf("Produto n�o encontrado.Tente novamente!\n");
				system("pause");
				system("cls");
			}
		system("cls");
		}while(resultado!=6);
		printf("Demanda de pedidos:\n\n");
		printf("Cadeiras = %d.\n", cadeira);
		printf("Mesas de Computador = %d.\n", mesaComputador);
		printf("Estantes de Livros = %d.\n", estanteLivro);
		printf("Mesas de Impressora = %d.\n", mesaImpressora);
		printf("Estante de CD = %d.\n", estanteCD);	
return 0;
}
