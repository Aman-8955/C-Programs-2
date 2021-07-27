#include<stdio.h>

int main()
{   int i,j,k,row;
    printf("enter your row number:-");
    scanf("%d",&row);
    for(i=1,k=row-1; i<=row; i++,--k) {
        for(j=1; j<=row; j++) {

           if(k>=j)
             printf(" ");
           else 
            printf("*");
            }
            
        printf("\n");


    }
    return 0;
}