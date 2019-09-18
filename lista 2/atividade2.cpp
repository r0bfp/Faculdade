#include <stdio.h>
#include <stdlib.h>

int main(){
	char sexo;
	float salario_b, valor_am;
	int idade;
	
	printf("Insira o sexo M ou F: ");
	fflush(stdin);
	scanf("%c", &sexo);
	printf("Insira a idade: ");
	scanf("%d", &idade);
	printf("Insira o salario bruto: ");
	scanf("%f", &salario_b);	
	
	if(sexo == 'F' || sexo == 'f' && idade <= 20){
		valor_am = salario_b * 0.02;
		printf("O valor a ser pago de assistencia medica eh: %.f", valor_am);
	}else if(sexo == 'F' || sexo == 'f' && idade <= 40){
		valor_am = salario_b * 0.05;
		printf("O valor a ser pago de assistencia medica eh: %.f", valor_am);
	}else if(sexo == 'F' || sexo == 'f' && idade > 40){
		valor_am = salario_b * 0.07;
		printf("O valor a ser pago de assistencia medica eh: %.f", valor_am);
	}else if(sexo == 'M' || sexo == 'm' && idade <= 20){
		valor_am = salario_b * 0.05;
		printf("O valor a ser pago de assistencia medica eh: %.f", valor_am);
	}else if(sexo == 'M' || sexo == 'm' && idade <= 40){
		valor_am = salario_b * 0.07;
		printf("O valor a ser pago de assistencia medica eh: %.f", valor_am);
	}else if(sexo == 'M' || sexo == 'm' && idade > 40){
		valor_am = salario_b * 0.1;
		printf("O valor a ser pago de assistencia medica eh: %.f", valor_am);
	}else{
		printf("\n ENTRADA INVALIDA");
	}
	
	system("pause>null");
}
