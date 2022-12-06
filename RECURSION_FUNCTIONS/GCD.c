//gcd of two numbers
#include<stdio.h>
int GCD(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return GCD(b,a%b);
}
int main()
{
    int a ,b,n;
    printf("enter the value for their GCD\n");
    scanf("%d%d",&a,&b);
    n=GCD(a,b);
    printf("GCD of their given numbers is %d",n);
}
