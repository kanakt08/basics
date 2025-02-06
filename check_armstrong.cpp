//Write a program to check if a number is an Armstrong number

#include<stdio.h>
#include<math.h>

int main()
{
    int n,digit=0,m,r,result=0;
    printf("enter the number : ");
    scanf("%d",&n);
    m=n;

    while(n>0){
        digit++;
        n=n/10;
    }
    n=m;

    while(n>0){
        r=n%10;
        result+=pow(r,digit);
        n=n/10;
    }

    if(result==m){
        printf("number is armstrong");
    }
    else{
        printf("Number is not prime.");
    }
    return 0;
}
