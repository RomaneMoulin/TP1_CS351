#include<stdio.h>

int main()
{
    int a,b,r,x,y;
    scanf("%d",&a);
    scanf("%d",&b);

    if (a<b){
        int c;
        c = b;
        b = a;
        a = c;
    }
    
    x=a;
    r=b%a;

    while(r!=0){
        y=x;
        x=r;
        r=y%x;          
    }
    
    printf("%d\n",x);
    return 0;
}

/*Pour tester le programme on peut se servir d'internet pour trouver des valeur et les tester ensuites
  par exemple : PGCD(357 ; 561) = 51. 
  on peut aussi tester avec a ou b = 0 ou encore a = b voir si la valeur du cgcd est la bonne*/