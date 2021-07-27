#include<stdio.h>

void main()
{   int i,j,k,row;
    printf("Enter Your Row Number:- ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
       for(j=1,k=65;j<=i;j++,k++)
       {
           printf("%c",k);
       }
       printf("\n");
    }
    
}