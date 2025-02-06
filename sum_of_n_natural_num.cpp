//Write a program to find the sum of the first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the value of n : ");
    scanf("%d",&n);

    //using foermula
    int sum1 = (n*(n+1))/2;
    printf("\nsum = %d",sum1);

    // using for loop
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum = %d",sum);

    return 0;
}
