#include <stdio.h>
#include <stdlib.h>
int main(){
	int cod, ha, homens = 0, mulheres = 0;
	char sexo;
	float salario_b, salario_l, salario_l_m, salario_b_f;	
	for(int i = 1; i <= 3; i++){
		printf("Insira o codigo: ");
		scanf("%d", &cod);
		printf("Insira o sexo: ");
		fflush(stdin);
		scanf("%c", &sexo);
		printf("Insira o numero de horas/aula mensal: \n");
		scanf("%d", &ha);		
		salario_b = ha * 40;
		salario_l = salario_b * 0.085;
		salario_l = salario_b - salario_l;		
		if(sexo == 'm' || sexo == 'M'){
			homens++;			
			salario_l_m = salario_l_m + salario_l;
			salario_l_m = salario_l_m / homens;			
		}else if(sexo == 'f' || sexo == 'F'){
			mulheres++;			
			salario_b_f = salario_b_f + salario_b;
			salario_b_f = salario_b_f / mulheres;			
		}		
		printf("Codigo: %d\n", cod);
		printf("Salario Bruto: %.2f\n", salario_b);
		printf("Salario Liquido: %.2f\n\n", salario_l);		
	}	
	printf("Salario liquido medio masculino: %.2f\n", salario_l_m);		
	printf("Salario bruto medio feminino: %.2f\n", salario_b_f);		
}
