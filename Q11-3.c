/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,total,percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    percentage=(total*100)/500;
    if(percentage>=33)
        printf("You are passed");
    else
        printf("You are failed");
        return 0;
}
