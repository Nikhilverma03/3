//Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a>0)
        printf("Number is positive");
    else
        printf("Number is non positive");
    return 0;
}
