#include<stdio.h>

void main()
{   int i,j,k=65,row;
    printf("Enter Your Row Number:- ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
       for(j=1;j<=i;j++,k++)
       {
           printf("%c",k);
           if(k==90)
           {
               k=64;
           }
       }
       printf("\n");
    }
    
}