#include<stdio.h>

int main()
{   int a, b, c=0;
    printf("enter a number: ");
    scanf("%d",&a);
    do {
        c=c+1;
        printf("%dx%d=%d \n",a,c,a*c);

    } while (c<10);


    return 0;
}