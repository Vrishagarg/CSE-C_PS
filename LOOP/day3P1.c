#include<stdio.h>
void main()
{
    int i,j,n,s;
    printf("enter the value of n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
          s=s+f;
    }
    printf("Sum ofFactorial of n natural no.s =%d",s);
}
