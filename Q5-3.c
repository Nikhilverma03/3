//Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a>99&&a<1000)
        printf("Number is three digit");
    else
        printf("Number is not three digit");
    return 0;
}
