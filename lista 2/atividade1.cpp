#include <stdio.h>
#include <stdlib.h>

int main(){
	char sexo;
	float peso_ideal, altura;
	
	printf("Insira o sexo F ou M: ");
	fflush(stdin);
	scanf("%c",&sexo);
	
	printf("\nInsira a altura: ");
	scanf("%f",&altura);
	
	if(sexo == 'F' || sexo == 'f'){
		peso_ideal = (altura * 62.1) - 44.7;
		printf("\nO peso ideal eh: %.2f", peso_ideal);
	}else if(sexo == 'M' || sexo == 'm'){
		peso_ideal = (altura * 72.7) - 58;
		printf("\nO peso ideal eh: %.2f", peso_ideal);
	}
	
	system("pause>null");
}
