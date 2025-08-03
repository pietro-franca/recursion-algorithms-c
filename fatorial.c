#include <stdio.h>

// FATORIAL DE UM NÚMERO

int fatorial (int n)
{
  if (n==0 || n==1)
  {
    return 1;
  }
  else
  {
    return n*fatorial(n-1);
  }
}

int main()
{
  int num;
  
  printf("Digite um numero: ");
  scanf("%d", &num);

  printf("O fatorial de %d eh: %d", num, fatorial(num));

  return 0;
}