#include<stdio.h>

int main()
{  int a,i,b=0;
   printf("enter your number:- ");
   scanf("%d",&a);
   for(i=2;i<100000;i++)
   { 
    if(i!=a)
      {
       if(a%i==0)
          {
        printf("It is not a prime number");
        b=1;
        break;
        }
       
       
       }
  }
   if(b!=1) 
      {
    printf("It is a prime number");
    }
    return 0;
}