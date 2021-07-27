#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b,c,d,e,total,per;
    printf("Enter your five subject numbers");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    per=total/5;
    if(per>=60) {
        printf("First rank");
    }
    else if(per>=47&&per<=59) {
        printf("Second rank");
    }
    else if(per>=36&&per<=46) {
        printf("Third rank");
    }
    else
    {
        printf("Fail");
    }
    getch();
}

