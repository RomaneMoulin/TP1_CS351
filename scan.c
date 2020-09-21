#include <stdio.h>
#define INC 2
int main() {
    int i;
    printf("Donnez un entier: ");
    scanf("%d", &i); /* &i: i par adresse (voir plus loin) */
    i = i + INC;
    printf("valeur de i=%d et son successeur i+1=%d\n", i, i+1);
    return (0);
}