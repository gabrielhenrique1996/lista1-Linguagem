#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	
int NUM;

printf("\nINFORME NUMERO: ");
scanf("%d",&NUM);

if (NUM > 0){
	printf("\nA RAIZ QUADRADA DO NUMERO :%.2f \n E O QUADRADO DO NUMERO :%.2f ",sqrt(NUM),pow(NUM,2));
}else
printf("o NUMERO E NEGATIVO\n");


return(0);

}
