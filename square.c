#include<stdio.h>

int main()
{   int a, b, c=0;
    printf("enter a number: ");
    scanf("%d",&a);
    do{
    c=c+1;
    b=c*c;
    printf("%dx%d=%d \n",c,c,b);
    
    
    
    
    }while (a>c);
    
    
        return 0;
}