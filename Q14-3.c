//Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if(a%7==0||a%3==0)
        printf("Number is divisible by 7 or 3");
    else
        printf("Number is not divisble");
    return 0;
}

