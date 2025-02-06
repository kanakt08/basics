//Write a program to check if a character is a vowel or consonant

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch1;
    printf("enter the character : ");
    scanf("%c",&ch1);

    char ch = tolower(ch1);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            printf("Enter character is vowel.");
        }
        else{
            printf("Enter character is consonant");
        }
    }
    return 0;
}
