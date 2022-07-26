//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
   float a,b,c,d;
   printf("enter the values of a,b,c: ");
   scanf("%f %f %f",&a,&b,&c);
   d=b*b-4*a*c;
   if(d>0)
        printf("The roots are real and distinct");
   else if(d==0)
        printf("The roots are real and equal");
   else
        printf("The roots are imaginary");
   return 0;
}
