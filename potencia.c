#include <stdio.h>
#include <stdlib.h>

// DADOS DOIS NÚMEROS INTEIROS num E pot,
// CALCULA E DEVOLVE O RESULTADO num^pot

int potencia (int n, int p)
{
  if (p == 1)
  {
    return n;
  }
  else
  {
    return n*potencia (n, p-1);
  }
}

int main ()
{
  int num, pot;

  printf("Digite o numero e sua potencia: ");
  scanf("%d%d", &num, &pot);

  printf("Potencia: %d", potencia(num, pot));

  return 0;
}