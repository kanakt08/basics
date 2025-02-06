//Write a program to check if a year is a leap year

#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year : ");
    scanf("%d",&yr);

    if(yr%4==0){
        if(yr%100==0)
        {
            if(yr%400==0)
            {
                printf("leap year");
            }
            else
            {
                printf("not leap year");
            }
        }
        else
        {
            printf("year is leap year");
        }
    }
    else
    {
        printf("year is not leap year");
    }
    return 0;

}
