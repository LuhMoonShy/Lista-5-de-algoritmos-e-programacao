//Uma loja de móveis de informática está necessitando de um sistema que identifique quais móveis de 
//informática estão sendo solicitados pelos seus clientes. Os móveis disponibilizados por esta empresa são: 
//1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando 
//se tratar de um móvel que não exista na empresa informe ao cliente que ainda não está disponível.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int resultado,cadeira=0,mesaComputador=0,estanteLivro=0,mesaImpressora=0,estanteCD=0,contador=0;	
		do{
			printf("\nInforme o número corresponte ao produto ao que você deseja.Contagem de Produtos = %d.\n", contador);
			printf("\n1- Cadeira.");
			printf("\n2- Mesa de Computador.");
			printf("\n3- Estante de Livros.");
			printf("\n4- Mesa de Impressora.");
			printf("\n5- Estante de CD.");
			printf("\n6- Continuar para verificarção...\n");
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
				printf("Produto não encontrado.Tente novamente!\n");
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
