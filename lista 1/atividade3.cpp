#include <stdio.h>
#include <stdlib.h>

int main(){	
	int motos, carros;
			
	printf("Insira a quantidade de carros: ");
	scanf("%d",&carros);
	printf("Insira a quantidade de motos: ");
	scanf("%d",&motos);
	
	printf("\nPneus de carros: %d", carros * 4);
	printf("\nPneus de motos: %d", motos * 2);
	printf("\nPneus de carros e motos: %d", carros * 4 + motos * 2);		
	printf("\nVeiculos: %d", carros + motos);		
}
