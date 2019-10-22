#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//total_geral_aumentado = total geral de salarrio dos fuyncionarios apos o aumento
//aumento = aumento dado sobre o salario
//salario_aumentado = salario apos o aumento
//qnt_func = quantidade de funcionarios que ganham entre 1001 e 2500 antes do aumento
//total_geral_apos_aumento = total geral de todos os salario dos funcionarios que ganham acima de 5000 apos o aumento
//qnt_func_aumento = quantidade de funcionarios que receberam aumento na faixa de 2501 a 5000
//media_salario = media de salario dos funcionarios que ganham abaixo de 1000 apos o aumento
//qnt_media_salario = variavel para tirar media
//maior_salario = maior salario apos aumento

int main(){	
	char opcao = 'S';
	float salario = 0, total_geral_aumentado, salario_aumentado, aumento, total_geral_apos_aumento, media_salario = 0, maior_salario = 0;
	int qnt_func = 0, qnt_func_aumento = 0, qnt_media_salario = 0;
	
	while(opcao == 'S'){		
		system("cls");
		
		printf("Insira o salario: \n");
		scanf("%f", &salario);
		
		while(salario <= 0){
			printf("O salario deve ser maior que 0\n");
			printf("Insira o salario: \n");
			scanf("%f", &salario);
		}		
		
		if(salario <= 1000){
			aumento = salario * 0.035;
			salario_aumentado = salario + aumento;
			total_geral_aumentado = total_geral_aumentado + salario_aumentado;
		}else if(salario > 1000 && salario <= 2500){
			qnt_func++;
			aumento = salario * 0.03;
			salario_aumentado = salario + aumento;
			total_geral_aumentado = total_geral_aumentado + salario_aumentado;
		}else if(salario > 2500 && salario <= 5000){
			aumento = salario * 0.025;
			salario_aumentado = salario + aumento;
			total_geral_aumentado = total_geral_aumentado + salario_aumentado;
			qnt_func_aumento++;
		}else{
			aumento = salario * 0.01;
			salario_aumentado = salario + aumento;
			total_geral_aumentado = total_geral_aumentado + salario_aumentado;
		}	
		
		if(salario_aumentado > 5000)
			total_geral_apos_aumento = total_geral_apos_aumento + salario_aumentado;
			
		if(salario_aumentado < 1000)
			qnt_media_salario++;
			media_salario = media_salario + salario_aumentado;
			
		if(salario_aumentado > maior_salario)
			maior_salario = salario_aumentado;
		
		printf("Deseja continuar? S/N \n");
		fflush(stdin);
		scanf("%c", &opcao);
		opcao = toupper(opcao);
		
		while(opcao != 'S' && opcao != 'N'){
			printf("Deve ser utilizado somente S ou N \n");
			printf("Deseja continuar? S/N \n");
			fflush(stdin);
			scanf("%c", &opcao);
			opcao = toupper(opcao);
		}		
	}
	
	media_salario = media_salario / qnt_media_salario;
	
	printf("Total geral apos o aumento: %.2f\n", total_geral_aumentado);
	printf("Quantidade de funcionarios que ganham entre 1.001,00 e 2.500,00 antes do aumento: %d\n", qnt_func);
	printf("Total geral do salario dos funcionarios que ganham acima de 5.000,00 apos o aumento: %.2f\n", total_geral_apos_aumento);
	printf("Quantidade de funcionarios que ganharam aumento na faixa de 2.501,00 a 5.000,00: %d\n", qnt_func_aumento);
	printf("Media de salarios dos funcionarios que ganham abaixo de 1.000,00 apos o aumento: %.2f\n", media_salario);
	printf("Maior salario apos o aumento: %.2f\n", maior_salario);
	
	system("pause>null");
}
