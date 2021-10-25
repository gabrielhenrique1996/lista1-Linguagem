#include <stdio.h>


int main(){
	
	float N,Tempo, vMedia,Distancia,Litros_Usados;
	
	printf("O seu carro faz em media quantos km/Litro \n");
	scanf("%f",&N);
	
	printf("Qual o tempo gasto com a viagem  \n");
	scanf("%f",&Tempo);
	
	printf("Qual a velocidade media da viagem \n");
	scanf("%f",&vMedia);
	
	Distancia = Tempo  * vMedia ;
	
	printf("A distancia percorrida pelo carro foi de : %.2f kms \n", Distancia);
	
	Litros_Usados = Distancia / N ; 
	
	printf("A quantidade de Combustivel gasto foi de : %.2f Litros \n", Litros_Usados);
	
	return 0;
}
