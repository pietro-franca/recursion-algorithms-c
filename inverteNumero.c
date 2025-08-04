#include <stdio.h>
#include <stdlib.h>

// REVERSES AN INTEGER NUMBER

int inverteNumero (int n)
{
  if (n == 0)
  {
    return 0;
  }

  int m = n, k = 1;
  int unidade = n % 10;

  // Divides the value of "m" until "k" reaches 
  // the correct value to multiply the digit correctly

  // Example:
  //  n = 123, unidade = 3
  //  m = 123, k = 1
  //  m = 12, k = 10
  //  m = 1, k = 100
  //  unidade * k = 300 ...

  for (; m > 1; k *= 10)
  {
    m /= 10;
  }

  return (unidade * k + inverteNumero((n - unidade) / 10));
}

int main()
{
  int num = 1637837;

  printf("%d", inverteNumero(num));
  
  return 0;
}