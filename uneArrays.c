#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

// GIVEN TWO ARRAYS OF INTEGERS,
// BUILDS A THIRD ARRAY AS THE SORTED UNION OF THE OTHER TWO

void merge(int *v1, int n1, int *v2, int n2, int *v3) 
{
    if (n1 == 0 && n2 == 0) return;

    if (n1 == 0) 
    {
      v3[0] = v2[0];
      merge(v1, n1, v2 + 1, n2 - 1, v3 + 1); // Advance v2 and v3
    }
    else if (n2 == 0) 
    {
      v3[0] = v1[0];
      merge(v1 + 1, n1 - 1, v2, n2, v3 + 1); // Advance v1 and v3
    }
    else if (v1[0] <= v2[0]) 
    {
      v3[0] = v1[0];
      merge(v1 + 1, n1 - 1, v2, n2, v3 + 1); // Advance v1 and v3
    }
    else 
    {
      v3[0] = v2[0];
      merge(v1, n1, v2 + 1, n2 - 1, v3 + 1); // Advance v2 and v3
    }
}

int main() 
{
  int v1[] = {1, 4, 5, 7, 10, 12};
  int v2[] = {2, 3, 4, 6, 9, 13};
  int n1 = sizeof(v1)/sizeof(v1[0]);
  int n2 = sizeof(v2)/sizeof(v2[0]);
  int v3[n1 + n2]; // The size of v3 is the sum of the sizes of v1 and v2

  merge(v1, n1, v2, n2, v3);

  for (int i = 0; i < n1 + n2; i++) 
  {
    printf("%d ", v3[i]);
  }
  printf("\n");

  return 0;
}
