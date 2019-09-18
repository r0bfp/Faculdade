#include <stdio.h>
#include <stdlib.h>

int main(){	
	float area_triangulo,
		  base_triangulo,
		  altura_triangulo,
		  area_quadrado,
		  lado_quadrado,
		  area_retangulo,
		  base_retangulo, 
		  altura_retangulo,
		  area_losango,
		  diag_maior,
		  diag_menor;
		  

	//calcular area do triangulo
	printf("Insira a base do triangulo: ");
	scanf("%f",&base_triangulo);
	printf("Insira a altura do triangulo: ");
	scanf("%f",&altura_triangulo);
	
	area_triangulo = (base_triangulo * altura_triangulo) / 2;
	
	printf("\nA area do triangulo e: %.2f", area_triangulo);
	
	
	//calcular area do quadrado
	printf("\n\n\nInsira o lado do quadrado: ");
	scanf("%f",&lado_quadrado);
	
	area_quadrado = lado_quadrado * lado_quadrado;
	
	printf("A area do quadrado e: %.2f", area_quadrado);
	
	
	//calcular area do retangulo
	printf("\n\n\nInsira o base do retangulo: ");
	scanf("%f",&base_retangulo);	
	printf("Insira a altura do retangulo: ");
	scanf("%f",&altura_retangulo);
	
	area_retangulo = base_retangulo * altura_retangulo;
	
	printf("\nA area do retangulo e: %.2f", area_retangulo);
	
	
	//calcular area do losango
	printf("\n\n\nInsira a diagonal maior do losango: ");
	scanf("%f",&diag_maior);
	printf("Insira a diagonal menor do losango: ");
	scanf("%f",&diag_menor);
	
	area_losango = (diag_maior * diag_menor) / 2;
	
	printf("\nA area do triangulo e: %.2f", area_losango);	
	
		
	system("PAUSE>NULL");	
}
