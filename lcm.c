//lcm of two numbers
#include<stdio.h>
int LCM(int a,int b,int x)
{
    x=x+b;
    if(x%a==0&&x%b==0)
        return x;
        else
            return LCM(a,b,x);
}
int main()
{
    int a ,b,x;
    printf("enter the numbers for their LCM\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        x=LCM(b,a,0);
    }
    else
        x=LCM(a,b,0);
    printf("LCM of the numbers %d and %d is %d\n",a,b,x);
    return 0;
    }


