#include<stdio.h>
#include<conio.h>
int fibo(int n)
{
  if(n==0)
  return 0;
  else if(n==1)
  return 1;
  else
    return fibo(n-1)+fibo(n-2);
}
void main()
{   
    int a,i;
    clrscr();
    printf("Enter your number:- ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
       printf("%d\n",fibo(i));
      
    }
    getch();
}