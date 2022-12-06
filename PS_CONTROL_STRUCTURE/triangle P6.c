#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the sides of the triangle");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&b==c&&a==c)
    printf("It is an equilateral Triangle");
else if(a==b||b==c||c==a)
    printf("It is an isosceles Triangle");
else
    printf("It is a scalene Triangle");
}
