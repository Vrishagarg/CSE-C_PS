#include<math.h>
#include<stdio.h>
void fun(int n)
{
    int i,j,f,a=1;
    float sum=0.0;
    for(i=2;i<=n;i=i++)
    {
        f=1;
        for(j=1;j<=(i+1);j++)
        {
            f=f*j;

        if(n%2==0)
        {
        sum=sum+a;
        sum=sum+(i/f);
        }
        else
        {
            sum=sum+a;
        sum=sum-(i/f);
        }
        }
        printf("the sum of series is : %d",sum);



    }
}

