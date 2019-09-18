#include <stdio.h>
#include <stdlib.h>

int main(){
	float media_p,
		  media_a, 
		  p_aluno_p_nota, 
		  p_aluno_s_nota, 
		  s_aluno_p_nota, 
		  s_aluno_s_nota;
	
	
	printf("Insira a primeira nota do primeiro aluno: ");
	scanf("%f", &p_aluno_p_nota);
	printf("Insira a segunda nota do primeiro aluno: ");
	scanf("%f", &p_aluno_s_nota);
	
	printf("Insira a primeira nota do segundo aluno: ");
	scanf("%f", &s_aluno_p_nota);
	printf("Insira a segunda nota do segundo aluno: ");
	scanf("%f", &s_aluno_s_nota);
	
	media_a = (p_aluno_p_nota + p_aluno_s_nota) / 2;
	media_p = (6 * p_aluno_p_nota + 4 * p_aluno_s_nota) / 10;
	
	printf("\nA media aritmetica do primeiro aluno eh: %.1f", media_a);
	printf("\nA media ponderada do primeiro aluno eh: %.1f", media_p);
	
	media_a = (s_aluno_p_nota + s_aluno_s_nota) / 2;
	media_p = (6 * s_aluno_p_nota + 4 * s_aluno_s_nota) / 10;
	
	printf("\nA media aritmetica do segundo aluno eh: %.1f", media_a);
	printf("\nA media ponderada do segundo aluno eh: %.1f", media_p);
	
	system("PAUSE>NULL");	
	
}
