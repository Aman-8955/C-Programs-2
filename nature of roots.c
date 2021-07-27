//by aman ali for finding nature of roots
#include<stdio.h>
#include<conio.h>

void main()
{ int a,b,c,D;
    clrscr();
    printf("Enter like ax2+bx+c=0\n");
    printf("Enter value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D==0){
    printf("roots are real and equal");}
     if(D<0){
    printf("roots are imaginary");}
     else{
    printf("roots are real and unequal");}
    
    
    getch();

}