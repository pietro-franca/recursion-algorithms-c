#include <stdio.h>
#include <stdlib.h>

// REVERSES AN ARRAY OF INTEGERS

void inverteArray (int *arr, int inicio, int fim)
{
  int aux;

  if (inicio >= fim)
  {
    // Ends when the middle of the array is reached
    return;
  }
  else
  {
    // Swaps the end element with the start element
    aux = arr[inicio];
    arr[inicio] = arr[fim];
    arr[fim] = aux;

    // Move one step forward from the start and one step backward from the end
    inverteArray(arr, inicio + 1, fim - 1);
  }
}

int main()
{
  int array[] = {2, 3, 7, 92, 37, 10, 26, 1};
  int tam = sizeof(array) / sizeof(array[0]);

  inverteArray(array, 0, tam - 1);

  for (int i = 0; i < tam; i++)
  {
    printf("%d ", array[i]);
  }
  
  return 0;
}
