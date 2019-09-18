#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	ne: numero de eleitores
	vpc: votos primeiro candidato
	vsc: votos segundo candidato
	vn: votos nulos
	vb: votos brancos
	result_vpc: relação de porcentagem dos votos do primeiro candidato
	result_vsc: relação de porcentagem dos votos segundo candidato
	result_vn: relação de porcentagem dos votos nulos
	result_vb: relação de porcentagem dos votos brancos
	*/
	
	int ne, vpc, vsc, vn, vb;
	float result_vpc, result_vsc, result_vn, result_vb;
	
	printf("\n Insira o numero de eleitores: ");
	scanf("%d", &ne);
	printf("\n Insira o numero de votos do primeiro candidato: ");
	scanf("%d", &vpc);			
	printf("\n Insira o numero de votos do segundo candidato: ");
	scanf("%d", &vsc);
	printf("\n Insira o numero de votos nulos: ");
	scanf("%d", &vn);
	printf("\n Insira o numero de votos brancos: ");
	scanf("%d", &vb);	
	
	result_vpc = (vpc * 100) / ne;
	result_vsc = (vsc * 100) / ne;
	result_vn = (vn * 100) / ne;
	result_vb = (vb * 100) / ne;
	
	printf("\n Os resultados sao: \n \
			Numero de Eleitores: %d \n \
			Primeiro candidato: %.2f%% \n \
			Segundo candidato: %.2f%%\n \
			Votos Nulos: %.2f%%\n \
			Votos Brancos: %.2f%% ", ne, result_vpc, result_vsc, result_vn, result_vb);
	
	
	system("PAUSE>NULL");	
	
}
