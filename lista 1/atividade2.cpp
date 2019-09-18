#include <stdio.h>
#include <stdlib.h>

int main(){	
	float saldo, c1, c2, deposito;
	
	printf("Insira o saldo: ");
	scanf("%f", &saldo);
	printf("\nInsira o valor do primeiro cheque: ");
	scanf("%f", &c1);
	printf("\nInsira o valor do segundo cheque: ");
	scanf("%f", &c2);
	printf("\nInsira o valor do deposito: ");
	scanf("%f", &deposito);

	saldo = saldo + c1 + c2 + deposito;
	
	printf("\nO saldo em conta e: %.2f", saldo);		
	
	system("PAUSE>NULL");
		
}
