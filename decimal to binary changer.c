#include<stdio.h>

void main()
{ int a,b,c;
printf("Enter your decimal value: ");
scanf("%d",&a);
c=a;
while(c>1){
b=c%2;
printf("%d",b);
a=c;
c=a/2;

}
printf("1");
   
}