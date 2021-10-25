#include <stdio.h>

int main(){
	
float megabytes , kilobytes ;

printf("Por favor entre com o valor a ser convertido para kilobytes.\n");
scanf("%f",&megabytes);

kilobytes = megabytes * 1024;

printf("Existem %.2f kilobytes em %.2f megabytes.\n",kilobytes,megabytes);

return 0;
}
