#include<stdio.h>
#include<conio.h>
int fun(int num2,int num3,int j,int num4,int total,int i) {
    while(num2>0)
    {
        num3=num2%10;
        num2=num2/10;
        for(j=1,num4=1; j<=i; j++)
        {
            num4=num3*num4;
        }
        total=num4+total;
    }
    return total;
}
void condition(int condi,int total)
{
    if(condi==total)
    {
        printf("\nArmstrong Number....");
    }
    else
    {
        printf("\nNot Armstrong Number...");
    }
}
void main()
{   int num,i=0,j,num2,num3,num4,total=0,condi;
    clrscr();
    printf("Enter Number:- ");
    scanf("%d",&num);
    num2=num;
    condi=num;
    while(num>0)
    {
        num=num/10;
        i++;
    }
    total=fun(num2,num3,j,num4,total,i);
    printf("Total of Numbers=%d",total);
    condition(condi,total);
    getch();
}