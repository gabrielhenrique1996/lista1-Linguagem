#include <stdio.h>


int main(){
	
	int N;
	
	printf("Digite um numero : ");
	scanf("%d",&N);
	
	if(N%2==0){
		printf("O %d e PAR",N);
	}else{
		printf("O %d e IMPAR",N);
	}
	
	return 0;
	
}
