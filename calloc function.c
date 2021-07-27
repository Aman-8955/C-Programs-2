#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    int *ptr;
    printf("enter your array size:- ");
    scanf("%d",&size);
    *ptr=(int)calloc(size,sizeof(int));
    printf("enter your numbers:- ");
    for(int i=0;i<=size-1;i++){
    scanf("%d",&*ptr+i);
    }
    for(int i=0;i<=size-1;i++){
    printf("%d",*ptr+i);
    }
    
    return 0;
}