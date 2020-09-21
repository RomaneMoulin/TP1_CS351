#include <stdio.h>

int main()
{
  int i = 2, j = 3, k = 4;

  printf("%d %d %d \n",i & j, i | 1, k | j); /* On rajoute "%d %d %d" afin d'afficher les résultats des trois opérations binaires */
  if ((i & k) || (i & j))
    printf("ok");

  return (0);
}

/*
Dans ce programme, à la ligne 7, trois opérations binaires sont effectuées et leurs résultats sont affichés à l'execution du programme :
  ET bit à bit (i & j) : 2 & 3 == 0010 & 0011 == 0010 (=2)
  OU bit à bit (i | 1) : 2 | 1 == 0010 | 0001 == 0011 (=3)
  OU bit à bit (k | j) : 4 | 3 == 0100 | 0011 == 0111 (=7)
A la ligne 8, la condition pour rentrer dans le if est que ((i & k) || (i & j)) vaille True, autrement dit si le résultat des opérations binaires de la condition vaut un nombre différent de 0, on rentre dans la boucle
  ET bit à bit (i & k) : 2 & 4 == 0010 & 0100 == 0000
  ET bit à bit (i & j) : 2 & 3 == 0010 & 0011 == 0010
  OU logique (0000 || 0010) : 0000 || 0010 == 0 || 2 == True
*/
