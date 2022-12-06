#include<stdio.h>
int armstrong(int N)
{
    int d;
    int s=0;;
    while(N>0)
    {
        d=N%10;
        s=s+(d*d*d);
        N=N/10;
    }
    return(s);

}
int main()
{
    int l,h,j,sum;
    printf("enter the lower limit of the series\n");
    scanf("%d",&l);
    printf("enter the upper limit of the series\n");
    scanf("%d",&h);
    printf("armstrong number between the range %d and %d are : \n",l ,h);
    for(j=l;j<=h;j++)
    {
        sum=armstrong(j);
        if(sum==j)
            printf("%d\n", j);
    }

}
