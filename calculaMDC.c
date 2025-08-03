#include <stdio.h>
#include <stdlib.h>

// CALCULA O MDC ENTRE DOIS NÚMEROS

int mdc(int p, int q)
{
  if ( p == q )
  {
    return p;
  }
  
  if ( p < q )
  {
    return mdc(q, p);
  }
  
  return mdc(p - q, q);
}

int mdcGeral(int arr[], int n) 
{
  // Caso base: se restar apenas um número, o MDC é ele próprio
  if (n == 1) 
  {
    return arr[0];
  }

  // Chamada recursiva: calcula o MDC do primeiro número com o MDC do resto do array
  int mdcRestante = mdcGeral((arr + 1), n - 1);  // Chama mdc recursivamente para o restante do array
  int a = arr[0];
  int b = mdcRestante;

  // Calcula o MDC de a e b usando o algoritmo de Euclides
  while (b != 0) 
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  
  return a; // Retorna o MDC final
}

int main()
{
  int num1 = 100, num2 = 45;
  int array[] = {100, 450, 5, 200};
  int tam = sizeof(array)/sizeof(array[0]);
  int resultado = mdcGeral(array, tam);

  printf("O mdc entre os numeros %d e %d eh: %d", num1, num2, mdc(num1, num2));
  printf("\nMDC GERAL: %d\n", resultado);

  return 0;
}