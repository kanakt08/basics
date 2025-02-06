//Write a program to check if a number is a palindrome

#include<stdio.h>
int main()
{
    int n,r,rev=0,m;
    printf("enter the number :  ");
    scanf("%d",&n);
    m=n;

    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }

    if(rev==m){
        printf("number is palindrome.");
    }
    else{
        printf("number is not palindrome.");
    }
    return 0;
}
