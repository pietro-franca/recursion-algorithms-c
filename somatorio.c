#include <stdio.h>
#include <stdlib.h>

// CALCULATE SUMMATION UP TO A NUMBER n

int soma (int n)
{
  if (n==1)
  {
    return 1;
  }
  else
  {
    return n+soma(n-1);
  }
}

int main ()
{
  int num;

  printf("Digite o ultimo numero a ser somado: ");
  scanf("%d", &num);

  printf("\nA soma eh: %d", soma(num));

  return 0;
}