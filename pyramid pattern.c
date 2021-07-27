#include<stdio.h>

void main()
{   int row, i,j,k,l;
    printf("Enter your row number:- ");
    scanf("%d",&row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row-i; j++)
        {
            printf(" ");
        }
        for(k=row; k>=j; k--)
        {
            printf("*");
        }
        for(l=1; l<i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}