#include <stdio.h>
int main() {
    int i = 2, j= 3, k= 4;
    printf("%d %d %d\n",i & j, i | 1,k | j); /*& = "et bit a bit" | = "ou bit a bit" le printf renvoie le resultat de l'operation binaire*/

    if ((i & k) || (i & j)) { /*si (i&k) est different de 1 ou (i&j) est different de 1 alors le if ne s'execute pas*/
        printf("ok\n");
    }
    return(0);
}