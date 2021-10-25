#include <stdio.h>

int main(){
	
	const vPercDistribuidor = 25 ;
	const vPercImpostos = 42 ; 
	
	float vCustoFabrica, ValorConsumidor, ValorDistribuidor,ValorImposto;
	
	printf("Programa para calcular o valor final do carro para o Consumidor\n");
	
	printf("Qual o Custo de fabrica do carro :\n");
	scanf("%f",&vCustoFabrica);
	
	ValorDistribuidor = (vCustoFabrica * vPercDistribuidor / 100);
	printf("O valor do  percentual do distribuidor e de : %.2f R$\n",ValorDistribuidor);
	
	ValorImposto = (vCustoFabrica*vPercImpostos / 100);
	printf("O valor do imposto do carro e de : %.2f R$\n", ValorImposto);
	
	ValorConsumidor = vCustoFabrica + ValorDistribuidor + ValorImposto;
	
	printf("O valor do carro para o Consumidor e de : %.2f R$\n",ValorConsumidor);
	
	return 0;
}
