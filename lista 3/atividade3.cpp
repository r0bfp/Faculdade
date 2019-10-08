#include <stdio.h>
#include <stdlib.h>

int main(){
	int menu, menu_mamifero, menu_quadrupede, menu_bipede, menu_aves, menu_nvoadoras, menu_repteis;
	
	printf("Pressione [1] para Mamiferos\n");
	printf("Pressione [2] para Aves\n");
	printf("Pressione [3] para Repteis\n");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
			printf("\nMamiferos\n");
			
			printf("Pressione [1] para Quadrupede\n");
			printf("Pressione [2] para Bipede\n");
			printf("Pressione [3] para Voador\n");
			printf("Pressione [4] para Aquatico\n");
			scanf("%d", &menu_mamifero);
			
			switch(menu_mamifero){
				case 1:
					printf("\nQuadrupedes\n");
			
					printf("Pressione [1] para Carnivoro\n");
					printf("Pressione [2] para Herbivoro\n");
					scanf("%d", &menu_quadrupede);
					
					switch(menu_quadrupede){
						case 1:
							printf("\n Leao \n");
						break;
						case 2:
							printf("\n Cavalo \n");
						break;	
						default:
							printf("\n\nOPCAO INVALIDA\n\n");
						break;					
					}
				break;
				case 2:
					printf("\nBibede\n");
			
					printf("Pressione [1] para Onivoro\n");
					printf("Pressione [2] para Frutiforo\n");
					scanf("%d", &menu_bipede);
					
					switch(menu_bipede){
						case 1:
							printf("\n Homem \n");
						break;
						case 2:
							printf("\n Macaco \n");
						break;		
						default:
							printf("\n\nOPCAO INVALIDA\n\n");
						break;					
					}
				break;
				case 3:
					printf("\nVoador\n");
					printf("\n Morcego \n");
				break;
				case 4:
					printf("\nAquatico\n");
					printf("\n Baleia \n");
				break;	
				default:
					printf("\n\nOPCAO INVALIDA\n\n");
				break;
			}
		break;
		case 2:
			printf("\nAves\n");
			
			printf("Pressione [1] para Nao Voadoras\n");
			printf("Pressione [2] para Nadadoras\n");
			printf("Pressione [3] para de Rapina\n");
			scanf("%d", &menu_aves);
			
			switch(menu_aves){
				case 1:
					printf("\nNao Voadoras\n");
			
					printf("Pressione [1] para Tropical\n");
					printf("Pressione [2] para Polar\n");
					scanf("%d", &menu_nvoadoras);
					
					switch(menu_nvoadoras){
						case 1:
							printf("\n Avestruz \n");
						break;
						case 2:
							printf("\n Pinguim \n");
						break;		
						default:
							printf("\n\nOPCAO INVALIDA\n\n");
						break;					
					}
				break;
				case 2:
					printf("\nNadadoras\n");
					printf("\n Pato \n");
				break;
				case 3:
					printf("\nde Rapina\n");
					printf("\n Aguia \n");
				break;	
				default:
					printf("\n\nOPCAO INVALIDA\n\n");
				break;
			}
		break;
		case 3:
			printf("\nRepteis\n");
			
			printf("Pressione [1] para Com Casco\n");
			printf("Pressione [2] para Carnivoro\n");
			printf("Pressione [3] para Sem Patas\n");
			scanf("%d", &menu_repteis);
			
			switch(menu_repteis){
				case 1:
					printf("\nCom Casco\n");
					printf("\n Tartaruga \n");
				break;
				case 2:
					printf("\nCarnivoro\n");
					printf("\n Crocodilo \n");
				break;
				case 3:
					printf("\nSem Patas\n");
					printf("\n Cobra \n");
				break;					
				default:
					printf("\n\nOPCAO INVALIDA\n\n");
				break;
			}
		break;			
		default:
			printf("\n\nOPCAO INVALIDA\n\n");
		break;
	}
	
	system("pause>null");
}
