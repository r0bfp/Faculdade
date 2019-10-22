#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int idade_m = 0, peso_m = 0, idade, pessoas, cont = 0, mulheres, homens;
	char sexo;
	float peso, media_peso = 0, media_idade = 0;
	
	printf("Insira a quantidade de pessoas: \n");
	scanf("%d", &pessoas);
	
	do{		
		do{				
			printf("Insira o sexo: [m] ou [f] \n");
			fflush(stdin);
			scanf("%c", &sexo);	
			sexo = tolower(sexo);
		}while(sexo != 'm' && sexo != 'f');
		
		if(sexo == 'm'){
			homens++;
			
			do{
				printf("Insira o peso: \n");
				scanf("%f", &peso); 	
			}while(peso <= 0);	
			
			if(peso > 80)
				peso_m++;
				
			media_peso = media_peso + peso;
			
		}else if(sexo == 'f'){
			mulheres++;
			
			do{
				printf("Insira a idade: \n");
				scanf("%d", &idade);				
			}while(idade <= 0);	
						
				if(idade > 25)
					idade_m++;
			
			media_idade = media_idade + idade;			
		}
				
		cont++;
	}while(cont < pessoas);
	
	media_peso = media_peso / homens;
	media_idade = media_idade / mulheres;
		
	printf("Media do peso dos homens: %.2f\n", media_peso);	
	printf("Quantidade de homens com peso maior que 80kg: %d\n", peso_m);	
	printf("Media da idade das mulheres: %.2f\n", media_idade);	
	printf("Quantidade de mulheres acima de 25 anos: %d\n", idade_m);		
}
