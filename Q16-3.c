//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
        printf("Character is uppercase alphabet");
    else if(ch>=97&&ch<=122)
        printf("Character is lowercase alphabet");
    else if(ch>='0'&&ch<='9')
        printf("Character is digit");
    else
        printf("Special character");
    return 0;
}
