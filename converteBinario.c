#include <stdio.h>
#include <stdlib.h>

// CONVERTE UM NÚMERO EM BINÁRIO

void converteBinario (int n)
{
  if (n == 0)
  {
    return;
  }
  else
  {
    converteBinario(n/2);
    printf("%d", n%2);
  }
}

int main()
{
  int num = 17858;

  printf("Numero %d em binario: ", num);
  converteBinario(num);

  return 0;
}