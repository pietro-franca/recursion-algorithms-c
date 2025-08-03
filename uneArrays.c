#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

// DADOS DOIS ARRAYS DE NÚMEROS INTEIROS,
// CONSTRÓI UM TERCEIRO, SENDO A UNIÃO ORDENADA DOS OUTROS DOIS

void merge(int *v1, int n1, int *v2, int n2, int *v3) 
{
    if (n1 == 0 && n2 == 0) return;

    if (n1 == 0) 
    {
      v3[0] = v2[0];
      merge(v1, n1, v2 + 1, n2 - 1, v3 + 1); // Avança v2 e v3
    }
    else if (n2 == 0) 
    {
      v3[0] = v1[0];
      merge(v1 + 1, n1 - 1, v2, n2, v3 + 1); // Avança v1 e v3
    }
    else if (v1[0] <= v2[0]) 
    {
      v3[0] = v1[0];
      merge(v1 + 1, n1 - 1, v2, n2, v3 + 1); // Avança v1 e v3
    }
    else 
    {
      v3[0] = v2[0];
      merge(v1, n1, v2 + 1, n2 - 1, v3 + 1); // Avança v2 e v3
    }
}

int main() 
{
  int v1[] = {1, 4, 5, 7, 10, 12};
  int v2[] = {2, 3, 4, 6, 9, 13};
  int n1 = sizeof(v1)/sizeof(v1[0]);
  int n2 = sizeof(v2)/sizeof(v2[0]);
  int v3[n1 + n2]; // O tamanho de v3 será a soma dos tamanhos de v1 e v2

  merge(v1, n1, v2, n2, v3);

  // Exibe o vetor resultante
  for (int i = 0; i < n1 + n2; i++) 
  {
    printf("%d ", v3[i]);
  }
  printf("\n");

  return 0;
}
