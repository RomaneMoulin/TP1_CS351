#include <stdio.h>

int main() {
    char c;
    printf("saisissez une lettre entre A et E : ");
    scanf("%c", &c); 

    if(c == 'A'){
        printf("TB\n");
    }
    else if(c == 'B'){
        printf("Bien\n");
    }
    else if(c == 'C'){
        printf("Assez bien\n");
    }
    else if(c == 'D'){
        printf("bof\n");
    }
    else if(c == 'E'){
        printf("nul\n");
    }
    else{
        printf("La lettre n'est pas compris entre A et E.\n");
    }

    return (0);
}
/*  switch(c){
        case 'A': printf("TB\n"); break;
        ...
        default: touch etouchprintf("La lettre n'est pas compris entre A et E.\n");

    }
    */