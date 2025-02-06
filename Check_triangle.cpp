//Write a program to find if a triangle is valid based on angles or sides

#include<stdio.h>
int main()
{
    int s1,s2,s3,a1,a2,a3;
    printf("enter the sides of the triangle : \n");
    printf("first side : ");
    scanf("%d",&s1);
    printf("second side : ");
    scanf("%d",&s2);
    printf("third side : ");
    scanf("%d",&s3);

    printf("enter the angles of the triangle : \n");
    printf("first angle : ");
    scanf("%d",&a1);
    printf("second angle : ");
    scanf("%d",&a2);
    printf("third angle : ");
    scanf("%d",&a3);

    int angle_sum = a1+a2+a3;

    if(angle_sum == 180 && ((s1+s2)>sa3) || ((s2+s3)>s1) || ((s1+s3)>s2) ){
        printf("Valid triangle.");
    }else
    {
        printf("Invaild Triangle ");
    }
    return 0;
}
