//Write a program to check for a vowel or consonant using switch-case

#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);

    switch(ch)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':
        printf("Character is Vowel. ");
        break;

    default:
        printf("invaild character.");
        break;
    }
    return 0;
}
