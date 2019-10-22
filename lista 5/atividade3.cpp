#include <stdio.h>
#include <stdlib.h>

int main(){
	int cont, eleitores = 0, voto, candidato_a = 0, candidato_b = 0, candidato_c = 0, candidato_d = 0, votos_brancos = 0, votos_nulos = 0;
	float candidato_a_p = 0, candidato_b_p = 0, candidato_c_p = 0, candidato_d_p = 0, votos_brancos_p = 0, votos_nulos_p = 0;
	
	printf("Insira a quantidade de eleitores: \n");
	scanf("%d", &eleitores);

	do{	
	system("cls");
	printf("Pressione [1] para votar no Candidato A.\n");
	printf("Pressione [2] para votar no Candidato B.\n");
	printf("Pressione [3] para votar no Candidato C.\n");
	printf("Pressione [4] para votar no Candidato D.\n");
	printf("Pressione [5] para votar Branco.\n");
	printf("Pressione [6] para sair.\n");
	scanf("%d", &voto);
	
		switch(voto){
			case 1: 
				printf("Candidato A.\n");
				candidato_a++;
			break;
			case 2: 
				printf("Candidato B.\n");
				candidato_b++;
			break;
			case 3: 
				printf("Candidato C.\n");
				candidato_c++;
			break;
			case 4: 
				printf("Candidato D.\n");
				candidato_d++;
			break;
			case 5: 
				printf("Voto Branco.\n");
				votos_brancos++;
			break;
			case 6: 
				printf("SAINDO\n");
			break;
			default:
				printf("Voto nulo\n");
				votos_nulos++;
			break;
		}
		
		printf("Voto Realizado com sucesso.\n");
		system("pause");
		
		cont++;
	}while(cont < eleitores);
	
	candidato_a_p = candidato_a * 100;
	candidato_a_p = candidato_a_p / eleitores;
	
	candidato_b_p = candidato_b * 100;
	candidato_b_p = candidato_b_p / eleitores;
	
	candidato_c_p = candidato_c * 100;
	candidato_c_p = candidato_c_p / eleitores;
	
	candidato_d_p = candidato_d * 100;
	candidato_d_p = candidato_d_p / eleitores;
	
	votos_brancos_p = votos_brancos * 100;
	votos_brancos_p = votos_brancos_p / eleitores;
	
	votos_nulos_p = votos_nulos * 100;
	votos_nulos_p = votos_nulos_p / eleitores;
	
	if(candidato_a_p > 50)
		printf("Candidade A foi eleito!\n\n");
	else if(candidato_b_p > 50)
		printf("Candidade B foi eleito!\n\n");
	else if(candidato_c_p > 50)
		printf("Candidade C foi eleito!\n\n");	
	else if(candidato_d_p > 50)
		printf("Candidade D foi eleito!\n\n");	
	
	printf("Candidato A: %.2f%%\n", candidato_a_p);
	printf("Candidato B: %.2f%%\n", candidato_b_p);
	printf("Candidato C: %.2f%%\n", candidato_c_p);
	printf("Candidato D: %.2f%%\n", candidato_d_p);
	printf("Votos Brancos: %.2f%%\n", votos_brancos_p);
	printf("Votos Nulos: %.2f%%\n", votos_nulos_p);	
	
	
}
