#include<math.h>
#include<stdio.h>
void main()
{
    int n,x,i,j,f;
    int a=1;
    float sum=0.0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the value of x\n");
    scanf("%d",&x);
    for(i=2;i<=n;i=i+2)
    {
        f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        if(n%2==0)
            sum=sum+((-1)*(pow(x,i)/f));
        else
            sum=sum+((pow(x,i)/f));

    }
    printf("the sum of the series%f" ,sum);
}
