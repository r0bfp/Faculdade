#include <stdio.h>
#include <stdlib.h>
int main(){
	int cont = 38, cont_aux;
	float result;	
	for(int i = 1; i <= 37; i++){
		cont_aux = cont;
		cont--;			 		
		result = (cont * cont_aux) / i;				
		printf("%d x %d / %d = %f\n", cont, cont_aux, i, result); 		
	}	
	system("pause>null");
}
