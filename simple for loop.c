#include<stdio.h>
#include<conio.h>

int main()
{   int a,i;
    printf("enter any value :");
    scanf("%d",&a);
    for(i=0;a>0;--a)
    {
        i++;
        printf("%d",i);

    }
    return 0;
}