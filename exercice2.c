#include <stdio.h>

int main(){
    int annee;
    printf("choisissez une annee : "); 
    scanf("%d", &annee);

    if(annee % 4 == 0){
        printf("l'annee %d est bissextile", annee);
    }
    return(0);
}