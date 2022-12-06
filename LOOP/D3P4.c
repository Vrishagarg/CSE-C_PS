#include<math.h>
#include<stdio.h>
void main()
{
    int i,j,x,n,f;
    float sum=1.0;
 printf("enter the value of X");
 scanf("%d",&x);
 printf("enter the value of n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {     f=1;
     for(j=1;j<=i;j++)
     {
         f=f*j;
      }
      if(i%2==0)
        sum=sum+((pow(x,i))/f);
      else
        sum=sum-((pow(x,i))/f);
}
printf(" the sum is %f",sum);
}
