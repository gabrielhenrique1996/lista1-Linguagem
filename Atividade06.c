#include<stdio.h>

int main(){
	
	int N1,N2;
	
	printf("Programa para verificar qual numero e maior\n");
	
	printf("Digite dois numeros inteiros:\n");
	scanf("%d%d",&N1,&N2);
	
	
	if(N1>N2){
		printf("O %d e maior que %d",N1,N2);
	}else{
		printf("O %d e maior que %d", N2,N1);
	}
	    
	    return 0;
}
