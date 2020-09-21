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