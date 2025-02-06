//Write a program to check if a number is prime

#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("enter the number : ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++){
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==1){
        printf("number is prime.");
    }
    else{
        printf("number is not prime.");
    }
    return 0;
}
