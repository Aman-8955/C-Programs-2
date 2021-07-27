#include<stdio.h>

int main()
{
int a,b,boj[100],i=0;
printf("Enter a number:- \n");
scanf("%d",&a);
 while(a){
b=a%2;
a=a/2;
boj[i]=b;
i++;
}
for(int j=i-1;j>=0;j--){
printf("%d",boj[j]);

}
   
}