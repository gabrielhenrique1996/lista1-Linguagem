#include <stdio.h>

int main(){
	
	float A,r,h,Pi;
	
	Pi = 3,14;
	
	
	printf(" Vamos Calcular a Area total de um cilindro\n");
	
	printf("Digite o raio do cilindro:\n");
	scanf("%f",&r);
	
	printf(" Digite a altura do cilindro:\n");
	scanf("%f",&h);
	
	A = 2 * Pi * r * ( r + h);
	
	printf("A Area total do seu cilindro e de : %.2f \n", A);
	
	return 0;
}
