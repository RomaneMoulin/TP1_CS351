#include <stdio.h>

/*Version utilisant l'instruction while*/
void version1()
{
  int n=0, i=1, somme=0; /*On initialise i à 1 et non pas à 0 afin d'eviter un tour de boucle inutile qui n'apporte rien à la somme*/

  printf("Rentrez la valeur de n pour realiser la somme des n premiers entiers\n");
  scanf("%d", &n);

  while (i <= n)
  {
    somme = somme + i;
    i++;
  }

  printf("La somme des %d premiers entiers vaut %d \n",n,somme);
}

/*Version utilisant l'instruction do*/
void version2()
{
  int n=0, i=0, somme=0; /*La difference avec la version1 est que la boucle va s'effectuer une fois avant d'effectuer le premier test, d'où l'initialisation de i à 0 et non pas à 1 afin de ne pas fausser la somme*/

  printf("Rentrez la valeur de n pour realiser la somme des n premiers entiers\n");
  scanf("%d", &n);

  do
  {
    somme = somme + i;
    i++;
  } while(i <= n);

  printf("La somme des %d premiers entiers vaut %d \n",n,somme);
}



int main()
{
  int version;

  printf("Choisissez la version de ce programme : \n1. Version utilisant l'instruction while\n2. Version utilisant l'instruction do\n");
  scanf("%d", &version);
  printf("\n");

  switch (version)
  {
    case 1:
      version1();
      break;

    case 2:
      version2();
      break;

    default:
      printf("ERROR : choix invalide\n");
      break;
  }

  return (0);
}

/*Si la valeur entrée par l'utilisateur est négative, la condition des while ne sera jamais vraie donc la somme restera à 0*/
