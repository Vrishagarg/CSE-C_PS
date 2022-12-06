#include<math.h>
#include<stdio.h>
void main()
{
int x,i,j,n,f;
int s=1;
printf("enter the value of X");
scanf("%d",&x);
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    f=1;
    for(j=1;j<=i;j++)
    {
        f=f*j;
    }
    s=s+((pow(x,i))/f);

}
printf("the sum of series =%d",s);
}
