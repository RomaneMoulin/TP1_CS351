#include <stdio.h>
int main() {
    int i, j, k, l;    /*definition des variable*/
    i = j = k = l = 0; /*affectation en parallèle*/ 

    while(i < 9) { 
        printf("i++=%d, ++j=%d, k--=%d, --l=%d\n",i++, ++j, k--, --l);
    }
    
    /*pré incrémentation : retourne la valeur puis incrémente*/
    /*post incrémention : incrémente puis retourne la valeur */

    /*i++ correspond a l'incrémenttion de i (pré incrémentation)*/
    /*i-- correspond a la decrémenttion de i (pré déincrémentation)*/
    /* quand ++/-- est placé avant (--i) ca va retourner i puis ensuite l'incrémenter. (post incrementation)*/ 

    printf ("i=%d, j=%d, k=%d, l=%d\n", i, j, k, l); /*a la fin toute les valeurs sont a la même valeur         */
    return (0);
}

