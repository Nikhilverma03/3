//Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>
int main()
{
    int a,res;
    printf("Enter any number: ");
    scanf("%d",&a);
    res=a&1;
    if(res)
        printf("Number is odd");
    else
        printf("Number is even");
    return 0;
}
