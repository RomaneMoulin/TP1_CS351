#include <stdio.h>

int main()
{
  /*
  Pour nos années "test", on choisit les dates :
  33 : NON divisible pas 4 => année NON bissextile
  40 : divisible pas 4 et NON divisible par 100 => année bissextile
  800 : divisible par 4, divisible par 100 et divisible par 400 => année bissextile
  1100 : divisible par 4, divisible par 100 et NON divisible par 400 => année NON bissextile
  */

  int annee = 800;

  if (((annee%4 == 0) && (annee%100 != 0)) || (annee%400 == 0))
  {
    printf("L'année %d est bissextile\n", annee);
  }

  else
  {
    printf("L'année %d n'est pas bissextile\n", annee);
  }

  return (0);
}
