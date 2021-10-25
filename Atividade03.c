#include <stdio.h>
#include <conio.h>


int main ( )
{
  int valor;
  
  printf ("Digite um valor de 1 a 7: ");
  scanf("%d", &valor);
  
  switch ( valor )
  {
    case 1 :
    printf ("Hoje e Domingo\n");
    break;
    
    case 2 :
    printf ("Hoje e Segunda\n");
    break;
    
    case 3 :
    printf ("Hoje e Terça\n");
    break;
    
    case 4 :
    printf ("Hoje e Quarta\n");
    break;
    
    case 5 :
    printf ("Hoje e Quinta\n");
    break;
    
    case 6 :
    printf ("Hoje e Sexta\n");
    break;
    
    case 7 :
    printf ("Hoje e Sabado\n");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
   getch();
   
  return 0;
}
