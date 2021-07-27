#include<stdio.h>

int main()
{   int dog[100],a,i,d;
    printf("type your quantity of your number: \n");
    scanf("%d",&a);
    for(int i=1; i<=a; i++) {
        scanf("%d",&dog[i]);
    }
    i=1;
    for( ; i<=a; i++) {
        if(dog[i]==0) {

            printf("yes zero is available\n");
            d=0;
        }
      }
    if(d){
printf("zero not available");}
}