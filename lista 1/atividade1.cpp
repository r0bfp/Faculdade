#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, result;
	
	printf("Insira o primeiro numero: ");
	scanf("%f", &n1);
	printf("\nInsira o segundo numero: ");
	scanf("%f", &n2);
	 
	result = n1 + n2;
	printf("\nA soma de %.2f com %.2f e: %.2f", n1, n2, result);
	result = n1 - n2;
	printf("\nA subtraçao de %.2f com %.2f e: %.2f", n1, n2, result);
	result = n1 * n2;
	printf("\nA multiplicacao de %.2f com %.2f e: %.2f", n1, n2, result);
	result = n1 / n2;
	printf("\nA divisao de %.2f com %.2f e: %.2f", n1, n2, result);
	
	system("PAUSE>null");
		
}

