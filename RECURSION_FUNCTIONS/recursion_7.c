#include<stdio.h>
int strong(int N)
{
    int f=1;
    int s=0;
    int d,i;
    while(N!=0)
    {
        f=1;
        d=N%10;
        for(i=1;i<=d;i++)
        {
            f=f*i;
        }
        s=s+f;
        N=N/10;
    }
    return(s);

}
int main()
{
    int sum,j,l,h;
    printf("enter the lower limit of the series\n");
    scanf("%d",&l);
    printf("enter the upper limit of the series\n");
    scanf("%d",&h);
    printf("the strong numbers between the given range are :\n");
    for(j=l;j<=h;j++)
    {

        sum=strong(j);
        if(sum==j)
            printf("%d  ", j);
    }
}
