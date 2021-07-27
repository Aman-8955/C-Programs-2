#include<stdio.h>

int main()
{
  int i=0;
while (i<5){
++i;
if(i==1||i==4||i==5){
printf("*   *\n");
}
else if(i==2){
printf("** **\n");}
else
printf("* * *\n");



}
   
    return 0;
}