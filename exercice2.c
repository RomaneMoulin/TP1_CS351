#include <stdio.h>

int main(){
    int annee;
    printf("choisissez une annee : "); 
    scanf("%d", &annee);

    if(annee % 400 == 0){
        printf("l'annee %d est bissextile\n", annee);

    }

    else if(annee % 4 == 0 && annee % 100 != 0){
        printf("l'annee %d est bissextile\n", annee);
    }

    else{
        printf("l'annee %d n'est pas bissextile\n", annee);
    }




    return(0);
}