#include <stdio.h>
#include <stdlib.h>

// INVERTE UM ARRAY DE NÚMEROS INTEIROS

void inverteArray (int *arr, int inicio, int fim)
{
  int aux;

  if (inicio >= fim)
  {
    // Acaba quando se chega ao meio do array
    return;
  }
  else
  {
    // Troca o elemento do fim com o elemento do início
    aux = arr[inicio];
    arr[inicio] = arr[fim];
    arr[fim] = aux;

    // Avança 1 do início e retrocede 1 do fim
    inverteArray(arr, inicio+1, fim-1);
  }
}

int main()
{
  int array[] = {2, 3, 7, 92, 37, 10, 26, 1};
  int tam = sizeof(array)/sizeof(array[0]);

  inverteArray(array, 0, tam-1);

  for (int i=0; i < tam; i++)
  {
    printf("%d ", array[i]);
  }
  
  return 0;
}