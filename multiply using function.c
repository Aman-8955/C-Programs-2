#include<stdio.h>

int multi(int a,int b){
return a*b;


}
void main()
{ int a, b, c;
printf("enter your two number");
scanf("%d%d",&a,&b);

c=multi(a,b);
    printf("%d",c);
  
}