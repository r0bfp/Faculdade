#include <stdio.h>
#include <stdlib.h>

int main (){
	while(1){
		int n1, n2, n3;
		
		printf("Insira o primeiro numero: ");
		scanf("%d", &n1);
		printf("Insira o segundo numero: ");
		scanf("%d", &n2);
		printf("Insira o terceiro numero: ");
		scanf("%d", &n3);
		
		if(n3 > n2 && n2 > n1){
			printf("%d %d %d\n", n3,  n2, n1);
		} else if (n2 > n3 && n3 > n1){
			printf("%d %d %d\n", n2,  n3, n1);		
		} else if (n3 > n1 && n1 > n2){
			printf("%d %d %d\n", n3,  n1, n2);		
		} else if (n2 > n1 && n1 > n3){
			printf("%d %d %d\n", n2,  n1, n3);		
		} else if (n1 > n2 && n2 > n3){
			printf("%d %d %d\n", n1,  n2, n3);		
		} else if (n1 > n3 && n3 > n2){
			printf("%d %d %d\n", n1,  n3, n2);		
		}
	}
	
	system("pause>null");
}
