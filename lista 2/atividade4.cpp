#include <stdio.h>
#include <stdlib.h>

int main(){
	float comissao, inss, vendas, salario_b, salario_l;
	
	printf("Insira o valor de vendas: ");
	scanf("%f", &vendas);	
	printf("\nInsira o salario bruto: ");
	scanf("%f", &salario_b);
	
	if(vendas <= 500){
		comissao = vendas * 0.02;
		salario_l = salario_b + comissao;	
	} else if (vendas <= 5000){
		comissao = vendas * 0.05;
		salario_l = salario_b + comissao;
	} else if (vendas <= 25000){
		comissao = vendas * 0.1;
		salario_l = salario_b + comissao;
	} else {
		comissao = vendas * 0.15;
		salario_l = salario_b + comissao;
	} 
	
	if(salario_l <= 1751.81){
		salario_l -= salario_l * 0.08;
		
		printf("\nSalario Bruto: %.2f", salario_b);		
		printf("\nComissao: %.2f", comissao);		
		printf("\nDesconto INSS: 8.0%%");		
		printf("\nSalario Liquido: %.2f", salario_l);	
	} else if (salario_l <= 2919.73){
		salario_l -= salario_l * 0.09;
		
		printf("\nSalario Bruto: %.2f", salario_b);		
		printf("\nComissao: %.2f", comissao);	
		printf("\nDesconto INSS: 9.0%%");		
		printf("\nSalario Liquido: %.2f", salario_l);	
	} else if (salario_l <= 5839.45){
		salario_l -= salario_l * 0.11;
		
		printf("\nSalario Bruto: %.2f", salario_b);	
		printf("\nComissao: %.2f", comissao);
		printf("\nDesconto INSS: 11.0%%");		
		printf("\nSalario Liquido: %.2f", salario_l);	
	}	
	
	system("pause>null");
}
