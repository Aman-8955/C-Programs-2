/*
by Aman ali
it's maked for change kg into gram
it's very simple program in c leanguge
so do fun

 */


#include<stdio.h>

int main()
{   float a;
    printf("enter your kg value");
    scanf("%f",&a);
    if(a>0) {
        printf("your gram valu is %1.0f gram",a*1000);
    }
    else if(a<1)
    {
        printf("your gram valu is %1.2f gram",a*1000);
    }
    return 0;
}