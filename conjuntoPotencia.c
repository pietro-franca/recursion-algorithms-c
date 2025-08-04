#include <stdio.h>
#include <string.h>
#define MAX 100

// GENERATES THE POWER SET OF A STRING

// 'pref' stores the current prefix (subset being built)
// 's' is the remaining part of the original string
// 'p' is the string where the generated subsets will be concatenated

void conjuntoPotencia(char pref[], char s[], char *p) 
{
  int tam; 
  char aux[100]; 
  tam = strlen(s);

  // Base case: no more characters to process
  if (tam == 0)   
  {
    // If the prefix is empty, it represents the empty set
    if (strlen(pref) == 0 )
    {
      strcpy(p, "\n\n{}");
    } 
    else 
    {
      strcat(p, "\n"); 
      strcat(p, pref); // Adds the current subset to the final result
    }
    return;
  }

  // First, recursive call WITHOUT including the current character (s[0])
  conjuntoPotencia(pref, s+1, p);

  // Now prepare the call WITH the current character included
  strcpy(aux, pref); 
  tam = strlen(aux); 
  aux[tam] = s[0]; 
  aux[tam+1] = '\0';

  // Recursive call WITH the current character included
  conjuntoPotencia(aux, s+1, p);

  return;
}

int main()
{
  char s[MAX] = "abcdefgh"; 
  char pref[MAX] = ""; 
  char p[MAX] = ""; 

  conjuntoPotencia(pref, s, p);

  printf("Conjunto potencia: %s\n", p);

  return 0;
}
