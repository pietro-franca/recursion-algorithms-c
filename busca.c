#include <stdio.h>
#include <stdlib.h>

int buscaSequencial (int *lista, int n, int k)
{
  for (int i=0; i < n; i++)
  {
    if (lista[i] == k)
    {
      return i;
    }
  }
  return -1;
}

int buscaBinaria (int *lista, int li, int ls, int k)
{
  if (li > ls)
  {
    return -1;
  }

  int meio = (li + ls)/2;

  if (lista[meio] == k)
  {
    return meio;
  }
  
  if (lista[meio] >= k)
  {
    return buscaBinaria (lista, li, meio, k);
  }
  else
  {
    return buscaBinaria (lista, meio+1, ls, k);
  }
  
}

int main()
{
  int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int tam = sizeof(array)/sizeof(array[0]);
  int elem = 7;

  int indice = buscaBinaria(array, 0, tam-1, elem);

  if (indice >= 0)
  {
    printf("Elemento encontrado!\nValor: %d, Indice: %d\n", elem, indice);
  }
  else
  {
    printf("Elemento nao encontrado!\n");
  }

  return 0;
}