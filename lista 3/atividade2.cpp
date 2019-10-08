#include <stdio.h>
#include <stdlib.h>

int main(){
	int menu, ano;
	char email, nome;
	
	printf("\nPressione [1] para Janeiro");
	printf("\nPressione [2] para Fevereiro");
	printf("\nPressione [3] para Marco");
	printf("\nPressione [4] para Abril");
	printf("\nPressione [5] para Maio");
	printf("\nPressione [6] para Junho");
	printf("\nPressione [7] para Julho");
	printf("\nPressione [8] para Agosto");
	printf("\nPressione [9] para Setembro");
	printf("\nPressione [10] para Outubro");
	printf("\nPressione [11] para Novembro");
	printf("\nPressione [12] para Dezembro\n");
	scanf("%d", &menu);
	
	printf("\nInsira o Ano: ");
	scanf("%d", &ano);
	
	switch(menu){
		case 1:
			printf("\n\nJaneiro eh composto por 31 dias.\n");
			printf("Nome: Marcos \n");
			printf("Telefone: 11 4967 4558 \n");
			printf("E-mail: marcos@barbershop.com\n");
			printf("Aniversario: 25\n");
		break;
		case 2:
			if(ano % 4 == 0){	
				if(ano % 100 != 0){	
					printf("\n\n%d eh bissexto, portanto Fevereiro eh composto por 29 dias.\n", ano);
					printf("\nNome: Joaquim");
					printf("\nTelefone: 11 9 3537 4543");
					printf("\nE-mail: joaquimbueno1@gmail.com");
					printf("\nAniversario: 28");
				}	
			} else if(ano % 400 != 0) {
					printf("\n\n%d nao eh bissexto, portanto Fevereiro eh composto por 28 dias.\n", ano);
					printf("\nNome: Joaquim");
					printf("\nTelefone: 11 9 3537 4543");
					printf("\nE-mail: joaquimbueno1@gmail.com");
					printf("\nAniversario: 28");			
			}
		break;
		case 3:
			printf("\n\nMarco eh composto por 31 dias.\n");
			printf("\nNome: ");
			printf("\nTelefone: ");
			printf("\nE-mail: ");
			printf("\nAniversario: ");
		break;
		case 4:
			printf("\n\nAbril eh composto por 30 dias.\n");
			printf("\nNome: ");
			printf("\nTelefone: ");
			printf("\nE-mail: ");
			printf("\nAniversario: ");
		break;
		case 5:
			printf("\n\nMaio eh composto por 31 dias.\n");
			printf("Nome: Luciana ");
			printf("\nTelefone: 11 9 8763 1782 ");
			printf("\nE-mail: lucianagarcia@terra.com.br");
			printf("\nAniversario: 04");
		break;
		case 6:
			printf("\n\nJunho eh composto por 30 dias.\n");
			printf("Nome: Natalia ");
			printf("\nTelefone: 11 4881 1802");
			printf("\nE-mail: natalia_mattos@apple.com");
			printf("\nAniversario: 13");
		break;
		case 7:
			printf("\n\nJulho eh composto por 31 dias.\n");
			printf("\nNome: ");
			printf("\nTelefone: ");
			printf("\nE-mail: ");
			printf("\nAniversario: ");
		break;
		case 8:
			printf("\n\nAgosto eh composto por 31 dias.\n");
			printf("\nNome: ");
			printf("\nTelefone: ");
			printf("\nE-mail: ");
			printf("\nAniversario: ");
		break;
		case 9:
			printf("\n\nSetembro eh composto por 30 dias.\n");
			printf("Nome: Bruno");
			printf("\nTelefone: 11 5532 7789 ");
			printf("\nE-mail: brunodonato@uni9.com");
			printf("\nAniversario: 17");
		break;
		case 10:
			printf("\n\nOutubro eh composto por 31 dias.\n");
			printf("\nNome: ");
			printf("\nTelefone: ");
			printf("\nE-mail: ");
			printf("\nAniversario: ");
		break;
		case 11:
			printf("\n\nNovembro eh composto por 30 dias.\n");
			printf("Nome: Bruna");
			printf("\nTelefone: 11 9 8824 2301 ");
			printf("\nE-mail: bluizac@gmail.com");
			printf("\nAniversario: 08");
		break;
		case 12:
			printf("\n\nDezembro eh composto por 31 dias.\n");
			printf("\nNome: ");
			printf("\nTelefone: ");
			printf("\nE-mail: ");
			printf("\nAniversario: ");
		break;
		default:
			printf("\nOPCAO INVALIDA\n");
		break;			
	}
	system("pause>null");
}
