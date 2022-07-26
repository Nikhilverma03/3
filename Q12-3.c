//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("Alphabet is in uppercase");
    else
        printf("Alphabet is in lowercase");
    return 0;
}
