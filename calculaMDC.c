#include <stdio.h>
#include <stdlib.h>

// CALCULATE THE GCD BETWEEN TWO NUMBERS

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
  // Base case: if only one number remains, the GCD is the number itself
  if (n == 1) 
  {
    return arr[0];
  }

  // Recursive call: calculates the GCD of the first number with the GCD of the rest of the array
  int mdcRestante = mdcGeral((arr + 1), n - 1);  // Recursively calls GCD for the rest of the array
  int a = arr[0];
  int b = mdcRestante;

  // Calculates the GCD of a and b using Euclid's algorithm
  while (b != 0) 
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  
  return a; // Returns the final GCD
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