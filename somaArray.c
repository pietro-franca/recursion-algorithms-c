#include <stdio.h>
#include <stdlib.h>

// SUM OF ELEMENTS IN AN ARRAY

int somaArray (int *arr, int n)
{
  if (n == 0)
  {
    return 0;
  }
  else 
  {
    return arr[n-1] + somaArray(arr, n-1);
  }
}

int main()
{
  int array[] = {2, 3, 7, 92, 16, 37, 10, 26, 1};
  int tam = sizeof(array)/sizeof(array[0]);

  printf("Soma dos numeros do array: %d\n", somaArray(array, tam));

  return 0;
}