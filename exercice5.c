#include <stdio.h>
int main() {
    int i = 2, j= 4, k= 1;                   /*deja on rajoute les %d au niveau du printf*/
    printf("%d %d %d\n",i & j, i | 1,k | j); /*& = "et bit a bit" | = "ou bit a bit" le printf renvoie le resultat de l'operation binaire*/

    if ((i & k) || (i & j)) { /*si (i&k) est different de 0 ou (i&j) est different de 0 alors le if ne s'execute pas*/
        printf("ok\n");       /*si on test avec int i = 2, j= 4, k= 1;  le programme de renvoie pas "ok" car (i&k) = 0 et (i&j) = 0*/
    }
    return(0);
}

