#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,a;
    int sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         sum=(sum+((i)*(i+1)*(i+2)));
    }
    printf("the sum of series is :%d",sum);
}
