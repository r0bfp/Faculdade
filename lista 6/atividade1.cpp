#include <stdio.h>
#include <stdlib.h>

int main(){
	int pessoas = 0, cont = 1, cond_a = 0, cond_a_b = 0, cond_a_b_c = 0, nenhum = 0;
	float nota_c = 0, nota_java = 0 , nota_php = 0;
	
	printf("Insira a quantidade de pessoas: \n");
	scanf("%d", &pessoas);	
	
	while(cont <= pessoas){
		system("cls");
		
		printf("Insira a nota da materia de Linguagem C: \n");
		scanf("%f", &nota_c);
		
		while(nota_c <= 0 || nota_c > 10){
			printf("A nota deve ser maior que 0 e menor ou igual a 10 \n\n");
			printf("Insira a nota da materia de Linguagem C: \n");
			scanf("%f", &nota_c);
		}
		
		printf("Insira a nota da materia de Linguagem Java: \n");
		scanf("%f", &nota_java);
		
		while(nota_java <= 0 || nota_java > 10){
			printf("A nota deve ser maior que 0 e menor ou igual a 10 \n\n");
			printf("Insira a nota da materia de Linguagem Java: \n");
			scanf("%f", &nota_java);
		}
		
		printf("Insira a nota da materia de Linguagem PHP: \n");
		scanf("%f", &nota_php);		
				
		while(nota_php <= 0 || nota_php > 10){
			printf("A nota deve ser maior que 0 e menor ou igual a 10 \n\n");
			printf("Insira a nota da materia de Linguagem PHP: \n");
			scanf("%f", &nota_php);
		}
		
		if(nota_c >= 5 && nota_java >= 6 && nota_php >= 7)
			cond_a_b_c++;
		else if(nota_c >= 5 && nota_java >= 6)
			cond_a_b++;
		else if(nota_c >= 5 && nota_java < 6 && nota_php < 7)
			cond_a++;			
		else
			nenhum++;				
			
		cont++;
	}
	
	
	printf("Quantidade de alunos que satisfazem a condicao A e nao satisfazem as demais condicoes: %d\n", cond_a);
	printf("Quantidade de alunos que satisfazem as condicoes A e B e nao satisfazem a C: %d\n", cond_a_b);
	printf("Quantidade de alunos que satisfazem todas as condicoes: %d\n", cond_a_b_c);
	printf("Quantidade de alunos que nao satisfazem nenhuma das condicoes: %d\n", nenhum);
	
	
	
	
	
	
	
	
	
	system("pause>null");
}
