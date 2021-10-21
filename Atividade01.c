#include <stdio.h>


int main(){
	
	float cotacaodolar,valor,valorconvertido;
	
	printf("Digite o valor atual do dolar:\n");
	scanf("%f",&cotacaodolar);
	printf("Digite o valor em Reais a ser convertido para Dolar:\n");
	scanf("%f",&valor);
	
	valorconvertido = valor / cotacaodolar;
	
	printf("O valor Convertido para Dolar : %.2f $\n",valorconvertido);
	
	return 0;
	
	
}
