#include<stdio.h>

void main()
{   int a,b,c=0,d;
    printf("Enter your number:- ");
    scanf("%d",&a);
    printf("Your Entered Number is %d\n",a);
    printf("Changed Number is ");
    d=a;
    while(a>0)
    {
        b=a%10;
        c=c*10+b;
        printf("%d",b);
        a=a/10;

    }
    if(c==d)
    {
        printf("\nPailendrom Number");
    }
    else {
        printf("\nNot a Pailendrom Number");
    }
  

}