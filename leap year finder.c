#include<stdio.h>

int main()
{   int year;

    printf("enter your year");
    scanf("%d",&year);
    if(year%100==0) {
        if(year%400==0) {
            printf("leap");
        }
        else {
            printf("not leap");
        }
    }
    else if(year%4==0) {
        printf("leap");
    }
    else {
        printf("not leap");
    }
    return 0;
}