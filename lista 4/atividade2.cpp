#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, result;
	char menu;
	
	printf("Pressione [*] para multiplicacao: \n");
	printf("Pressione [+] para adicao: \n");
	printf("Pressione [S,s] para Sair: \n");
	scanf("%c", &menu);
	
	switch(menu){
		case '*':
			printf("\nTABUADA DE MULTIPLICACAO\n");
			
			printf("Insira um numero: \n");
			scanf("%d", &n1);	
			
			for(int i = 0; i <= 10; i++){
				result = n1 * i;
				
				printf("%d x %d = %d\n", n1, i, result); 
			}
		break;
		case '+':
			printf("\nTABUADA DE ADIÇÃO\n");
			
			printf("Insira um numero: \n");
			scanf("%d", &n1);	
			
			for(int i = 0; i <= 10; i++){
				result = n1 + i;
				
				printf("%d + %d = %d\n", n1, i, result); 
			}
		break;
		case 'S':
			printf("\nSAINDO\n");			
		break;
		case 's':
			printf("\nSAINDO\n");			
		break;
		default: 
			printf("\nOPCAO INVALIDA\n");	
		break;		
	}
}
