//Elabore um programa que solicite ao usu�rio um valor percentual a ser calculado. Este c�lculo dever� 
//ocorrer sobre um valor constante igual a 555. O programa dever� calcular o percentual desejado e 
//apresentar o resultado calculado deste percentual.
#include <stdio.h>
#include<stdlib.h>
int main(){
	float percentual,porcentagem;
		porcentagem=0;
		printf("Informe o percentual desejado: ");
		scanf("%f", &percentual);	
		porcentagem = (percentual * 555) / 100;	
	system("cls");
		printf("%.0f%%  de 555 = %.2f.", percentual, porcentagem);
return 0;		
}
