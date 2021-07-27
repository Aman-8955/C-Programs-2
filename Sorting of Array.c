//Program of sorting of an array
//written by Aman Ali
#include<stdio.h>

int main()
{
    int nums[50],digit,temp,i,j;//variables declaration
    printf("How many nubmbers you want to enter:- ");
    scanf("%d",&digit);//take digits of numbers from user
    printf("Enter your numbers:- \n");
    for(i=0; i<digit; i++) 
    {
        scanf("%d",&nums[i]);//take numbers from user
    }
    for(i=0; i<digit; i++)//outer loop
     {
        for(j=0; j<digit; j++)//inner loop
        {
            if(nums[i]<nums[j])//sorting condition of array numbers
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                //swap the numbers
            }
        }
     }
    printf("Your Answer= ");
    for(i=0; i<digit; i++) 
    {
        printf("%d  ",nums[i]);//result
    }
    return 0;
}