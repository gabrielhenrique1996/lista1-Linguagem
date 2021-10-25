#include <stdio.h>

int main(){
	
	int num,i;
	
	printf("Informe o valor de um numero inteiro : ");
	scanf("%d",&num);
	
	 for(i=0 ; i <= 10; i++) {
       printf("%d x %d = %d\n", num, i, (num * i));
   }
       return 0;
}
