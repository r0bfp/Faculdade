#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome_p[20], nome_s[20];
	float salario_b_primeiro, 
		  salario_l_primeiro, 
		  salario_b_segundo,
		  salario_l_segundo,
		  vendas_p,
		  vendas_s;
	
	printf("Insira o nome do primeiro vendedor: ");
	scanf("%s", &nome_p);
	printf("\nInsira o salario bruto do primeiro vendedor: ");
	scanf("%f", &salario_b_primeiro);
	printf("\nInsira o total de vendas do mes do primeiro vendedor: ");
	scanf("%f", &vendas_p);
	
	printf("\nInsira o nome do segundo vendedor: ");
	scanf("%s", &nome_s);
	printf("\nInsira o salario bruto do segundo vendedor: ");
	scanf("%f", &salario_b_segundo);
	printf("\nInsira o total de vendas do mes do segundo vendedor: ");
	scanf("%f", &vendas_s);
	
	salario_l_primeiro = salario_b_primeiro * 0.85;
	salario_l_primeiro += vendas_p * 0.05;
	salario_l_segundo = salario_b_segundo * 0.85;
	salario_l_segundo += vendas_s * 0.05;
	
	printf("\nO salario liquido de %s eh %.2f", nome_p, salario_l_primeiro);	
	printf("\nO salario liquido de %s eh %.2f", nome_s, salario_l_segundo);
	
	system("PAUSE>NULL");	
	
}
