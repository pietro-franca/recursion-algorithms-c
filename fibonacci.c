#include <stdio.h>
#include <stdlib.h>

// DADO O TAMANHO DA SEQUÊNCIA DE FIBONACCI DESEJADO,
// PRINTA A SEQUÊNCIA E CALCULA O TERMO FINAL

int fibonacci (int n)
{
  if (n==0 || n==1)
  {
    return 1;
  } 
  else
  {
    return fibonacci(n-1) + fibonacci(n-2);     
  }
}

int main ()
{
  int tamSequencia;
  
  printf("Digite o tamanho da sequencia de fibonacci: ");
  scanf("%d", &tamSequencia);

  for (int i=0; i <= tamSequencia; i++)
  {
    printf("%d ", fibonacci(i));
  }

  printf("\nO valor do termo na sequencia de fibonacci eh: %d", fibonacci(tamSequencia));

  return 0;
}