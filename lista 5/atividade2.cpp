#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int idade, homens = 0 , mulheres = 0 , pessoas = 0, criancas = 0, adolescentes = 0, adultos = 0, classe_a = 0, classe_b = 0, classe_c = 0;
	char sexo, opcao;
	float renda, renda_m, homens_p = 0, mulheres_p = 0, criancas_p = 0, adolescentes_p = 0, adultos_p = 0, classe_c_p = 0, classe_b_p = 0, classe_a_p = 0;
	
	do{		
		system("cls");
		do{
			printf("Insira a idade: \n");
			scanf("%d", &idade);	
		}while(idade <= 0);
		do{
			printf("Insira o sexo: \n");
			fflush(stdin);
			scanf("%c", &sexo);	
			sexo = toupper(sexo);
		}while(sexo != 'F' && sexo != 'M');		
		
		printf("Insira a renda: \n");
		scanf("%f", &renda);
		
		if(sexo == 'M')
			homens++;
		else if(sexo == 'F')
			mulheres++;
			
		pessoas++;	
		
		if(idade <= 12) 
			criancas++;
		else if(idade > 12 && idade <= 17)
			adolescentes++;
		else if(idade > 17)
			adultos++;		
		
		if(renda <= 3992)
			classe_c++;			
		else if(renda > 3992 && renda < 19960)
			classe_b++;
		else if(renda > 19960)
			classe_a++;
		
		renda_m = renda_m + renda;	
		
		printf("Deseja continuar? [s] Sim [n] Nao \n");
		fflush(stdin);
		scanf("%c", &opcao);
		opcao = tolower(opcao);	
	}while(opcao == 's');			
	
	renda_m = renda_m / pessoas;
	
	classe_a_p = classe_a * 100;
	classe_a_p = classe_a_p / pessoas;
	
	classe_b_p = classe_b * 100;
	classe_b_p = classe_b_p / pessoas;
	
	classe_c_p = classe_c * 100;
	classe_c_p = classe_c_p / pessoas;
	
	criancas_p = criancas * 100;
	criancas_p = criancas_p / pessoas;	
	
	adolescentes_p = adolescentes * 100;
	adolescentes_p = adolescentes_p / pessoas;	
	
	adultos_p = adultos * 100;
	adultos_p = adultos_p / pessoas;	
	
	mulheres_p = pessoas - mulheres;
	mulheres_p = mulheres_p * 100;
	mulheres_p = mulheres_p / pessoas;
	
	homens_p = pessoas - homens;
	homens_p = homens_p * 100;
	homens_p = homens_p / pessoas;	
	
	printf("\nQuantidade de pessoas: %d = 100%%\n", pessoas);
	printf("Quantidade de homens: %d = %.2f%%\n", homens, homens_p);
	printf("Quantidade de mulheres: %d = %.2f%%\n", mulheres, mulheres_p);
	printf("Quantidade de criancas: %d = %.2f%%\n", criancas, criancas_p);
	printf("Quantidade de adolescentes: %d = %.2f%%\n", adolescentes, adolescentes_p);
	printf("Quantidade de adultos: %d = %.2f%%\n", adultos, adultos_p);	
	printf("Quantidade de pessoas de classe A: %d = %.2f%%\n", classe_a, classe_a_p);
	printf("Quantidade de pessoas de classe B: %d = %.2f%%\n", classe_b, classe_b_p);
	printf("Quantidade de pessoas de classe C: %d = %.2f%%\n", classe_c, classe_c_p);
	printf("Renda media das pessoas: %.2f\n", renda_m);
}
