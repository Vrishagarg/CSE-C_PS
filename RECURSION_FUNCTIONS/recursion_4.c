#include<stdio.h>
int l,h;
int perfect(int N)
{
    int i;
    int sum=0;
    for(i=1;i<N;i++)
    {
        if(N%i==0)
            sum=sum+i;
    }
    return(sum);
}
void main()
{
    int s,j;
    printf("enter the lower limit");
    scanf("%d",&l);
    printf("enter the upper limit");
    scanf("%d",&h);
    for(j=l;j<=h;j++)
    {
        s=perfect(j);
        if(s==j)
        {
            printf("%d is a perfect number\n",j);
        }
    }

    }

