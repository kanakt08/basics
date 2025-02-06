//Write a program to check if a number is positive, negative, or zero

#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    if(n>0){
        printf("entered numner is positive.");
    }else if(n<0){
        printf("Entered number is negative.");
    }else{
        printf("number is Zero.");
    }
}
