#include <stdio.h>

int main(){
    int init,i;

    printf("rentrez un entier : ");
    scanf("%d", &init);
    i = init;
    while(i >= 0){
        printf("%d\n",i);
        i--;
    }

    return(0);
}

/*si on rentre un numero negatif on a condition de la boucle while qui n'est jamais verifié*/