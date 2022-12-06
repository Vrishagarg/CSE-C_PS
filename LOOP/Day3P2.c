#include<stdio.h>
  void sum(int n)
  {
      int i,j;
      int s=0;
    for(i=1;i<=n;i++)
    {
        int f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        s=s+f/i;
    }
  printf("Sum=%d",s);
  }

void main()
{
    int a;
    printf("enter the value of n");
    scanf("%d",&a);
    sum(a);
}
