#include <stdio.h>
#include <stdlib.h>


int main(){
	int numAleatorio, num, cont=0;
	
	srand(time(NULL));
	
	numAleatorio = rand()%20;
	
	do{
		printf("Numero da sorte: ");
		scanf("%d",&num);
		cont++;
		
	}while(num!=numAleatorio);
	   printf("Voce acertou em %d tentativas \n", cont);
	   
	   return 0;
	
	
	
}
