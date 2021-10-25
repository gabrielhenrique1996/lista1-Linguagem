#include <stdio.h>

int main(){
	
	char timeA,timeB;
	int placarA,placarB;
	
	
	printf("Qual o nome do time A e a quantidade de gols\n");
	scanf("%s %d",timeA,placarA);
	
	printf("Qual o nome do timeB e a quantidade de gols\n");
	scanf("%s %d",timeB,placarB);
	
	
	if(placarA>placarB){
		printf("O %s venceu e portanto ganhou 3 pontos e o %s perdeu portanto recebeu 0 pontos\n",timeA,timeB);
	}else if(placarB>placarA){
		printf("o %s venceu e portanto ganhou 3 pontos e o %s perdeu portanto recebeu 0 pontos\n",timeB,timeA);
	}else if(placarA==placarB){
		printf("o placar ficou empatado entao ambos os times %s e %s receberam 1 pontos\n",timeA,timeB);
	}else{
		printf("digite um placar valido com numeros inteiros...\n");
	}
	
	return 0;
	
}
