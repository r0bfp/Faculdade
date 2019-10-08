#include <stdio.h>
#include <stdlib.h>

int main(){
	char sexo;
	float percent_h, percent_m, altura, altura_h, altura_m, maior_altura, menor_altura = 3;
	int pessoas, homens = 0, mulheres = 0;
	
	for(int i = 1;i <= 4; i++){
		printf("Insira o sexo: [M] ou [F] \n");
		fflush(stdin);
		scanf("%c", &sexo);
		
		printf("Insira a aultura: \n");
		scanf("%f", &altura);
		
		if(altura > maior_altura)
			maior_altura = altura;
		if(altura < menor_altura)
			menor_altura = altura;
		
		if(sexo == 'M' || sexo == 'm'){
			homens++;
			
			altura_h = altura_h + altura;		
		}else if(sexo == 'F' || sexo == 'f'){
			mulheres++;
			
			altura_m = altura_m + altura;						
		}		
	}	
	
	pessoas = homens + mulheres;
	
	percent_h = homens * 100;
	percent_h = percent_h / pessoas;
	
	percent_m = mulheres * 100;
	percent_m = percent_m / pessoas;	
	
	altura_m = altura_m / mulheres;	
	altura_h = altura_h / homens;
	
	printf("\nMenor altura do grupo: %.2f\n", menor_altura);
	printf("Maior altura do grupo: %.2f\n", maior_altura);
	printf("Altura media dos homens: %.2f\n", altura_h);
	printf("Altura media das mulheres: %.2f\n", altura_m);	
	printf("Quantidade de homens: %.2f%%\n", percent_h);
	printf("Quantidade de mulheres: %.2f%%\n", percent_m);
}
