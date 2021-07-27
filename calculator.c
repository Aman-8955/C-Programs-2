#include<stdio.h>

int main()
{
int a,b;
char c;
float answer;
int total;
    printf("enter a number : ");
    scanf("%d",&a);
    printf("enter a symbol : ");
    scanf(" %c",&c);
    printf("enter a second number : ");
    scanf("%d",&b);
    switch(c)
    {
    case '-' :
    total=a-b;
    printf("total = %d",total);
    break;
    
     case '+' :
    total=a+b;
    printf("total = %d",total);
    break;
    
    
     case '*' :
    total=a*b;
    printf("total = %d",total);
    break;
    
    
     case '/' :
    answer=a/b;
    printf("answer = %f",answer);
    break;
    
    
    
    
    }

 
   
    
    
}