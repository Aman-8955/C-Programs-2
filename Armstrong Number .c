#include<stdio.h>

int main()
{   int num,i=0,j,num2,num3,num4,total=0,condi;
    printf("Enter Number:- ");
    scanf("%d",&num);
    num2=num;
    condi=num;
    while(num>0)
       {
          num=num/10;
          i++;
       }
    while(num2>0)
       {  
          num3=num2%10;
          num2=num2/10;
          for(j=1,num4=1;j<=i;j++)
             {
                num4=num3*num4;
             }
            total=num4+total;
       }
    printf("Total of Numbers=%d",total);
    if(condi==total)
    {
      printf("\nArmstrong Number....");
    }
    else
    {
      printf("\nNot Armstrong Number...");
    }
    return 0;
}