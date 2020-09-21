#include <stdio.h>
int main() {
    int i, j, k, l;    /*definition des variable*/
    i = j = k = l = 0; 

    while(i < 9) { 
        printf("i++=%d, ++j=%d, k--=%d, --l=%d\n",i++, ++j, k--, --l);
    }
    
    /*post incrémentation : retourne la valeur d'origine puis incrémente*/
    /*pré incrémention : incrémente puis retourne la valeur */

    /*i++ correspond à l'incrémenttion de i (post incrémentation)*/
    /*i-- correspond à la decrémenttion de i (post déincrémentation)*/
    /* quand ++/-- est placé avant (--i) cela va incrémenter i puis retourner la valeur. (pré incrementation)*/ 

    printf ("i=%d, j=%d, k=%d, l=%d\n", i, j, k, l);   /*à la fin toutes les variables ont la même valeur  */
    return (0);
}

