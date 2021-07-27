#include<stdio.h>

int main()
{   int a;
    float b;
first:

    printf("Type a number\n");
    printf("km to miles=1\ninches to foot=2\ncm to inches=3\npound to kg=4\ninches to meter=5\nexit=6\n");
    printf("enter a number");
    scanf("%d",&a);
    if(a<=1) {
        printf("enter your kg value\n");
        scanf("%f",&b);
        printf("your miles value is %f\n\n",b/1.609344);
        goto first;
    }
    else if(a<=2) {
        printf("enter your inches value\n");
        scanf("%f",&b);
        printf("your foot value is %6.2f\n\n",b/12);
        goto first;
    }
    else if(a<=3) {
        printf("enter your centimeter value\n");
        scanf("%f",&b);
        printf("your inches value is %f\n\n",b/2.54);
        goto first;

    }
    else if(a<=4) {
        printf("enter your pound value\n");
        scanf("%f",&b);
        printf("your kgs value is %f\n\n",b*0.45359237);
        goto first;
    }
    else if(a<=5) {
         printf("enter your inches value\n");
        scanf("%f",&b);
        printf("your meter value is %f\n\n",b*0.0254);
        goto first;
    }
    else if(a<=6) {
        printf("OK");

    }
    else if(a>6) {
        printf("Your number is wrong number!\n\n ");
    goto first;
}
    return 0;
}