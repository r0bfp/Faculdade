#include <stdio.h>
#include <stdlib.h>
int main(){
	float altura, idade_media = 0;
	int jogadores = 0, altura_maior = 0, idade_maior = 0, altura_idade_menor = 0, idade;	
	for(int i = 1; i <= 11; i++){
		printf("Insira a idade: \n");
		scanf("%d", &idade);
		printf("Insira a altura: \n");
		scanf("%f", &altura);		
		if(altura > 1.8)
			altura_maior++;			
		if(idade >= 25)
			idade_maior++;			
		if(altura <= 1.8 && idade < 18)
			altura_idade_menor++;				
		idade_media = idade_media + idade;		
		jogadores++;
	}			
	idade_media = idade_media / jogadores;			
	printf("Quantidade de jogadores com altura acima de 1,8: %d\n", altura_maior);
	printf("Quantidade de jogadores com idade acima ou igual a 25 anos: %d\n", idade_maior);
	printf("Quantidade de jogadores com altura abaixo ou igual a 1,8 e idade inferior a 18 anos: %d\n", altura_idade_menor);
	printf("Idade media dos jogadores: %.2f\n\n", idade_media);	
	system("pause>null");
}
