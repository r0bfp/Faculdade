#include <stdio.h>
#include <stdlib.h>

int main(){
	int menu;
	float num1, num2, result;
	
	printf("Pressione [1] para adicao");
	printf("\nPressione [2] para subtracao");
	printf("\nPressione [3] para multiplicacao");
	printf("\nPressione [4] para divisao");
	printf("\nPressione [5] para sair\n");
	scanf("%d", &menu);
	
	
	
	switch(menu){
		case 1:
			printf("\nInsira o primeiro numero: ");
			scanf("%f", &num1);
			printf("\nInsira o segundo numero: ");
			scanf("%f", &num2);
			
			result = num1 + num2;
			
			printf("\n\n%.2f + %.2f = %.2f", num1, num2, result);
		break;
		case 2:
			printf("\nInsira o primeiro numero: ");
			scanf("%f", &num1);
			printf("\nInsira o segundo numero: ");
			scanf("%f", &num2);
			
			result = num1 - num2;
			
			printf("\n\n%.2f - %.2f = %.2f", num1, num2, result);
		break;
		case 3:
			printf("\nInsira o primeiro numero: ");
			scanf("%f", &num1);
			printf("\nInsira o segundo numero: ");
			scanf("%f", &num2);
			
			result = num1 * num2;
			
			printf("\n\n %.2f X %.2f = %.2f", num1, num2, result);
		break;	
		case 4:
			printf("\nInsira o primeiro numero: ");
			scanf("%f", &num1);
			printf("\nInsira o segundo numero: ");
			scanf("%f", &num2);
			
			if(num1 == 0 || num2 == 0){
				printf("\n\nDIVISAO POR 0 IMPOSSIVEL\n\n");
				break;
			}		
			
			result = num1 / num2;
			
			printf("\n\n%.2f / %.2f = %.2f", num1, num2, result);
		break;	
		case 5:
			printf("\n\nSAINDO");
		break;
		default: 
			printf("OPCAO INVALIDA!");
		break;
	}
}
