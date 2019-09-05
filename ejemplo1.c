#include <stdio.h>

int main()
{
   int numero;

   printf( "\n   Introduzca un numero entero: " );
   scanf( "%d", &numero );
   printf("%p",&numero);

   return 0;
}
