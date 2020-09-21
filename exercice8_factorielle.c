#include<stdio.h>

int facto(int n){
    int j, p = 1;

    if(n == 1){
        return 1;
    }
    else if(n<=1){
        return -1;
    }

    else{
        for(j = 1; j<=n; j++){
            p = p * j;
        }
        return p;
    }
}

int facto_bis(int m){
    int i = 0, p = 0,j,q=1;
    while(p < m){
        
        if(i == 1){
            p = 1;
        }
        else{
            for(j = 1; j<=i; j++){
                q = q * j;
            }
            p = q;
        }

        i++;
    }
    return i-1;
}

int main()
{
    int x;
    printf("rentrez m tel que le programme retourne la valeur du plus petit entier positif n tel que n! soit supérieur à m : ");
    scanf("%d", &x);

    printf("%d! = %d\n", x, facto(x));
    printf("le n de n! le plus proche de m est (si -1 alors il n'y a pas de reponse): %d\n", facto_bis(x));
    printf("Ce qui correspond (si -1: alors il n'y a pas de reponse) à %d! = %d\n", facto_bis(x), facto(facto_bis(x)));

    return 0;
}

/*on a essayé avec 23 ce qui a bien donner n = 4 avec 25 on a bien n = 5 
si la valeur tombe pile comme avec 24 alors n = 4 soit 4! = 24 le compte est bon.

Il faut aussi tester le cas particulier 0! et y implementer une solution algorithmique

on peut aussi pendre en compte les chiffre negatif en renvoyant -1 à cette occasion */