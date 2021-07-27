#include<stdio.h>

int main()
{ int a,b;
  char c;
    printf("enter your first value : ");
    scanf("%d",&a);
    printf("Enter your symbol : ");
    scanf("%s",&c);
    printf("enter your second number : ");
    scanf("%d",&b);
    if(c=='+'){
    printf("your value is %d",a+b);
    }
    else if(c=='-'){
    printf("your value is %d",a-b);
    }
    else if(c=='*'){
    printf("your value is %d",a*b);
    }
    else if(c=='/'){
    printf("your value is %2.2f",(float)a/b);
    }
    return 0;
}