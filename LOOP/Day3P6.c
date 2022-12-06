#include<math.h>
#include<stdio.h>
void main()
{
    int i,j,x,n,f;
    float sum=0.0;
 printf("enter the value of X\n");
 scanf("%d",&x);
 printf("enter the value of n\n");
 scanf("%d",&n);
 for(i=1;i<=n;i=i+2)
 {     f=1;
     for(j=1;j<=i;j++)
     {
         f=f*j;
      }
      if(n%2!=0)
        sum=sum+((pow(x,i))/f);
      else
        sum=sum+((-1)*(pow(x,i)/f));
}
printf(" the sum is %f",sum);
}
