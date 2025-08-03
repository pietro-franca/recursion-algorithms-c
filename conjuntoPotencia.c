#include <stdio.h>
#include <string.h>
#define MAX 100

// GERA O CONJUNTO POTÊNCIA DE UMA STRING

// 'pref' armazena o prefixo atual (subconjunto em construção)
// 's' é a parte restante da string original
// 'p' é a string onde os subconjuntos gerados serão concatenados

void conjuntoPotencia(char pref[], char s[], char *p) 
{
  int tam; 
  char aux[100]; 
  tam = strlen(s);

  // Caso base: não há mais caracteres para processar
  if (tam == 0)   
  {
    // Se o prefixo está vazio, representa o conjunto vazio
    if (strlen(pref) == 0 )
    {
      strcpy(p, "\n\n{}");
    } 
    else 
    {
      strcat(p, "\n"); 
      strcat(p, pref); // Adiciona o subconjunto atual ao resultado final
    }
    return;
  }

  // Primeiro, chamada recursiva SEM incluir o caractere atual (s[0])
  conjuntoPotencia(pref, s+1, p);

  // Agora preparamos a chamada COM o caractere atual incluído
  strcpy(aux, pref); 
  tam = strlen(aux); 
  aux[tam] = s[0]; 
  aux[tam+1] = '\0';

  // Chamada recursiva COM o caractere atual incluído
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
