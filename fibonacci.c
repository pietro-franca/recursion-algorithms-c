#include <stdio.h>
#include <stdlib.h>

// GIVEN THE SIZE OF THE DESIRED FIBONACCI SEQUENCE,
// PRINT THE SEQUENCE AND CALCULATE THE FINAL TERM

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