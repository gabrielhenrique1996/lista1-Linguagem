#include <stdio.h>

int main(){
	
	int BV, BA, BB;
	int BVerde,BAmarela,BBranca,total;
	
	BV = 10;
	BA = 5;
	BB = 3;
	
	printf("Quantas bolas verdes o jogador pegou :\n");
	scanf("%d",&BVerde);
	printf("Quantas bolas amarelas o jogador pegou :\n");
	scanf("%d",&BAmarela);
	printf("Quantas bolas brancas o jogador pegou :\n");
	scanf("%d",&BBranca);
	
	total = BVerde*BV + BAmarela*BA +BBranca*BB;
	
	printf("O jogador Fez uma pontuacao total de  : %d Pontos", total);
	
}
