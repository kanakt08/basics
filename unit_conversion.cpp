//Write a program to perform unit conversion (e.g., cm to m, kg to g)

#include<stdio.h>
int main()
{
    float num,result;
    int choice;
    printf("enter 1. for conversion in (cm to m) OR enter 2. for conversion in (kg to g) or enter 3 conversion km to m\n\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
            printf("conversion cm to m\n");
    printf("enter the num : ");
    scanf("%f",&num);
    result = (num/100);
    printf(" num in Meter : %f",result);
    break;

    case 2 :
    printf("conversion kg to g\n");
    printf("enter the num : ");
    scanf("%f",&num);
    result = (num*1000);
    printf(" num in grams : %f",result);
    break;

    case 3 :
    printf("conversion km to m\n");
    printf("enter the num : ");
    scanf("%f",&num);
    result = (num*1000);
    printf(" num in m : %f",result);
    break;

    default : printf("invaild choice");
    break;
    }

    return 0;
}
