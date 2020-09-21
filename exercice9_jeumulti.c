#include<stdio.h>

void jeumulti(int n){
    int i,r;
    for(i = 1; i<=9; i++){
        printf("%d x %d = ", i, n);
        scanf("%d", &r);

        if(r != i*n){
            printf("erreur! %d x %d = %d et non %d\n", i, n, i*n, r);
            break;
        }
    }
}

void jeumulti2(int n){
    int i, r, nb_erreur=0;
    for(i = 1; i<=9; i++){
        printf("%d x %d = ", i, n);
        scanf("%d", &r);

        if(r != i*n){
            nb_erreur++;
        }
    }
    printf("Vous avez fait %d erreur(s)\n", nb_erreur);
}

int main()
{
    int x;
    do{
        printf("rentrez en numero entre 2 et 9 : ");
        scanf("%d", &x);
        }
    while(x<2 || x>9);

    jeumulti2(x);

    return 0;
}

/*On teste avec une table aleatoire, et on peut voir comment le programme reagit aux valeurs non désirées comme les nombres
  negatifs et 0.
  Il faut aussi s'assurer que les erreurs soit bien comptées.*/
