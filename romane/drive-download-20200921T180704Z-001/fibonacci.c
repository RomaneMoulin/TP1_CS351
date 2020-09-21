#include <stdio.h>

int fibonnacci(int n)
{
  int somme, i;
  int u0 = 0, u1 = 1;
  int un_1 = 1, un_2 = 0;

  if (n > 1)
  {
    for(i=2; i<=n; i++) /* On part de i = 2 car on commence la suite en calculant le terme u2 de la suite, jusqu'au terme un */
    {
      somme = un_1 + un_2;
      un_2 = un_1;
      un_1 = somme;
    }
  }
  else if (n == 0)
  {
    somme = u0;
  }
  else
  {
    somme = u1;
  }

  return somme;
}



int main()
{
  int n, resultat;

  printf("Rentrez la valeur de n tel que (0 <= n <= 46) pour calculer le terme de rang n de la suite de Fibonacci\n");
  scanf("%d",&n);
  printf("\n");

  if (n >= 0 && n <= 46) /* Valeurs de n pour lesquelles notre programme fonctionne */
  {
    resultat = fibonnacci(n);
    printf("Le terme de rang %d vaut %d\n", n, resultat);
  }
  else
  {
    printf("ERREUR : valeur de n invalide\n");
  }

  return (0);
}

/*
Pour bien tester cette fonction, l'utilisateur doit rentrer les valeurs 0,1, une valeur négative ou supérieure à 46, et n'importe quelle autre valeur supérieure à 1 et strictement inférieure à 47 (car au-delà le résultat sera négatif puisque int et un type signé et que les valeurs pour les rangs n>46 deviennent trop grandes pour être codées sur 31 bits)
Pour n=0, la fonction doit renvoyer 0
Pour n=1, la fonction doit renvoyer 1
Pour les autres cas, il faut vérifier à la main
Pour n négatif ou supérieur à 46, le programme renvoie "ERREUR : valeur de n invalide"
*/
