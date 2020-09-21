#include <stdio.h>

int main()
{
  int i, j, k, l;

  i = j = k = l = 0; /*Initialisation à 0 de tous les entiers*/
  while(i < 9)
  {
    printf("i++ = %d, ++j = %d, k-- = %d, --l = %d\n",i++, ++j, k--, --l);
  }

  printf ("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l);

  return (0);
}

/* En executant ce programme, on remarque que lorsque les symboles "++" et "--" se trouvent après la variable (i++ , k--), il s'agit d'une post-incrementation/decrementation, c'est à dire que la valeur d'origine sera retournée avant d'être incrémentée */
/* A l'inverse, lorsque les symboles "++" et "--" se trouvent avant la variable (++i , --k), il s'agit d'une pré-incrementation/decrementation, c'est à dire que la valeur d'origine sera incrémentée avant d'être retournée */
