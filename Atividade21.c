#include <stdio.h>

int main(){
	
	char *c;
    int a = 1, b = 1,n, i;

     printf("Digite o Nesimo termo: ");
     scanf("%d", &n);
     printf("\n");
      for(i=0;i<n;i++) {
        if(i % 2 == 0) {
           printf("%d ", a);
              a += b;
   } else {
       printf("%d ", b);
        b += a;
     }
     }

     return 0;
	
}
