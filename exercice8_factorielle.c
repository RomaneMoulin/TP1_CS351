#include<stdio.h>

int facto(int n){
    int i, p = 1;
    for(i = 1; i<=n; i++){
        p = p * i;
    }
    return p;
}

int facto_bis(int m){
    int i = 0, p = 0;
    while(p < m){
        p = facto(i);
        i++;
    }
    return i-1;
}

int main()
{
    int x;
    printf("rentrez m tel que le programme retourne la valeur du plus petit entier positif n tel que n! soit supérieur à m : ");
    scanf("%d", &x);

    printf("le n de n! le plus proche de m est : %d\n", facto_bis(x));
    printf("Ce qui correspond à %d! = %d\n", facto_bis(x), facto(facto_bis(x)));

    return 0;
}

/*on a essayé avec 23 ce qui a bien donner n = 4 avec 25 on a bien n = 5 
si la valeur tombe pile comme avec 24 alors n = 4 soit 4! = 24 le compte est bon.*/