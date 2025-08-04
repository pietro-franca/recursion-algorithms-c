#include <stdio.h>
#include <stdlib.h>

// COUNTS HOW MANY TIMES A NUMBER K APPEARS IN A NUMBER N

int contaNum (int n, int k)
{
  // If n = 45312, n%10 = 2, n%100 = 1, n%1000 = 3, ...
  int unidade = n % 10;

  if (n == 0)
  {
    return 0;
  }
  else
  {
    if (unidade == k)
    {
      // If the last digit is equal to k, add 1
      return contaNum((n - unidade) / 10, k) + 1;
    }
    else
    {
      // If not, move to the next digit
      return contaNum((n - unidade) / 10, k);
    }
  }
}

int main()
{
  int N = 1735217813;
  int K = 1;

  printf("Numero de vezes em que o numero %d aparece em %d: %d", K, N, contaNum(N, K));

  return 0;
}