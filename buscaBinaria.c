#include <stdio.h>
#include <stdlib.h>

// BINARY SEARCH

int buscaBinaria (int *lista, int li, int ls, int k)
{
  // Base case: if the search range is invalid, element not found
  if (li > ls)
  {
    return -1;
  }

  // Calculate the middle index
  int meio = (li + ls)/2;

  // If the middle element is the target, return its index
  if (lista[meio] == k)
  {
    return meio;
  }
  
  // If target is smaller, search in the left half (including mid)
  if (lista[meio] >= k)
  {
    return buscaBinaria (lista, li, meio, k);
  }
  else
  {
    // Otherwise, search in the right half (excluding mid)
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