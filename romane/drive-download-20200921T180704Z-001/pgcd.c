#include <stdio.h>

int pgcd(int a, int b)
{
  int x, r;

  if (a < b) /* On fait en sorte que le plus grand des deux entiers soit en premier pour ne pas avoir à se préoccuper de l'ordre des variables plus loin dans nos instructions */
  {
      x = a;
      a = b;
      b = x;
  }

  while (r != 0)
  {
    r = a%b;
    a = b;
    b = r;
  }

  return a; /* On retourne a car à la fin de la boucle while, a prend la valeur de b qui est à ce moment là le pgdc de a et b, car r vaut 0 à la fin de la boucle */
}


int main()
{
  int a, b, resultat;
  
  printf("Rentrez les valeurs a et b (séparées par un espace) dont vous souhaitez calculer le PGCD\n");
  scanf("%d %d", &a, &b);
  printf("\n");

  resultat = pgcd(a,b);

  printf("Valeur de a = %d\n", a);
  printf("Valeur de b = %d\n", b);
  printf("PGCD(a,b) = %d\n", resultat);

  return (0);
}
