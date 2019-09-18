#include <stdio.h>
#include <stdlib.h>

int main(){
	float altura, peso;
	int idade, hv;
	
	printf("Insira a altura: ");
	scanf("%f", &altura);	
	printf("\nInsira a idade: ");
	scanf("%d", &idade);
	printf("\nInsira as horas de voo: ");
	scanf("%d", &hv);
	printf("\nInsira o peso: ");
	scanf("%f", &peso);	
	
	if(altura >= 1.75 && hv > 1600){
		if(idade >= 22 || idade <= 40){
			if(peso >= 65 || peso <= 95){
				printf("\nCANDIDATO SATISFATORIO");
			}
		}
	} else {
		printf("\nCANDIDATO INSATISFATORIO");
	}	
	
	system("pause>null");
}
