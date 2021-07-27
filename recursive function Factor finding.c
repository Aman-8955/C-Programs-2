#include<stdio.h>
int add(int a){
if(a==1){
return 1;}
else{
return a*add(a-1);}
}
int main()
{ int a;
printf("enter a number which you want Factor\n");
scanf("%d",&a);
   printf("%d",add(a));
    return 0;
}