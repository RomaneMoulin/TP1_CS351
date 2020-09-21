#include <stdio.h>

int fibo (int n);

int fibo (int n){
    int u0 = 0;
    int u1 = 1;
    int u;
    int i;

    if(n == 0){ /*cas particulier u1*/
        return(1);
    }
    
    for(i = 0; i < n; i++){
        u = u1 + u0;
        u0 = u1;
        u1 = u;
    }
    return(u);
}

int main() {
    int n;
    printf("Quel rang de la suite de fibonacci voulez vous calculer ?");
    scanf("%d", &n);

    printf("%d\n", fibo(n-1));
    return(0);
}

/*l'utilisateur doit tester les valeurs initials u0 et u1 ainsi que d'autre valeur pour s'assurer du bon fonctionnement*/ 