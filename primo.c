#include <stdio.h>
#include <stdlib.h>

// VERIFICA SE UM NÚMERO É PRIMO
// E, DADO UM VALOR max, LISTA TODOS OS PRIMOS ATÉ ESSE VALOR

int primo (int n, int divisor)
{
  if (divisor == 1)
  {
    return 1;
  }
  
  if (n%divisor == 0 && n != divisor)
  {
    return 0;
  }
  
  return primo(n, divisor-1);
}

void primosAteMax (int max)
{
  for (int i=1; i <= max; i++)
  {
    if (primo(i, i)) printf("%d ", i);
  }
}

int main()
{
  int num, max;

  printf("Digite um numero para ser verificado: ");
  scanf("%d", &num);

  if (primo(num, num))
  {
    printf("O numero eh primo!");
  }
  else
  {
    printf("O numero nao eh primo!");
  }

  printf("\nDigite um valor maximo para listar todos os primos ate esse valor: ");
  scanf("%d", &max);

  primosAteMax(max);

  return 0;
}