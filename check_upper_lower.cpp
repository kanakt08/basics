//Write a program to check for uppercase, lowercase, or special character

#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("Entered charcter is lower case character.");
    }
    else if(ch>='A' && ch<='Z'){
        printf("Entered character is Uppercase character.");
    }
    else{
        printf("Entered charcter is Special Character.");
    }
    return 0;
}
