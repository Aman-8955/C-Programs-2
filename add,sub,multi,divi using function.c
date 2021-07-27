#include<stdio.h>
void add(int num1,int num2){
printf("%d",num1+num2);
}
void sub(int num1,int num2){
printf("%d",num1-num2);
}
void multi(int num1,int num2){
printf("%d",num1*num2);
}
void divi(int num1,int num2){
printf("%d",num1/num2);
}

int main()
{
    int num1,num2,action;
    printf("Enter your first number:- ");
    scanf("%d",&num1);
    printf("Enter your second number:- ");
   scanf("%d",&num2);
printf("choose what are you want\n1.Addition\n2.subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&action);
     switch(action){
    case 1:
    add(num1,num2);
    break;
    case 2:
    sub(num1,num2);
    break;
    case 3:
    multi(num1,num2);
    break;
    case 4:
    divi(num1,num2);
    break;
    default:
    printf("error.......");
    }
    
    
}