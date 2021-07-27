#include<stdio.h>

int main()
{int a,b,c;
    printf("Enter your Value: ");
    scanf("%d",&a);
    printf("Enter your power of value: ");
    scanf("%d",&b);
    c=a;
    for(int i=0;b>1;--b){
    c=c*a;
    
    }
    printf("%d",c);
    return 0;
}