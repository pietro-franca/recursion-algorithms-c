#include <stdio.h>
#include <stdlib.h>

// INVERTE UM NÚMERO INTEIRO

int inverteNumero (int n)
{
  if (n == 0)
  {
    return 0;
  }

  int m = n, k=1;
  int unidade = n%10;

  // Divide o valor de "m" até que "k" chegue ao 
  // valor correto para multiplicar a unidade corretamente

  // Ex: 
  //  n = 123, unidade = 3
  //  m = 123, k = 1
  //  m = 12, k = 10
  //  m = 1, k = 100
  //  unidade*k = 300 ...

  for (; m > 1; k*=10)
  {
    m/=10;
  }

  return (unidade*k + inverteNumero((n-unidade)/10));
}

int main()
{
  int num = 1637837;

  printf("%d", inverteNumero(num));
  
  return 0;
}