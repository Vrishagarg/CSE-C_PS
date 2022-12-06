#include<stdio.h>

int mean(int A[],int n)
{
    int avg=0;
    int i;
    float sum=0.0;
    for(i=0;i<5;i++)
    {
        sum=(sum+A[i]);
    }
    avg=(float)(sum/5);
   return avg;
}
int median(int A[],int n)
{
    int median=0;
    median=A[(n-1)/2];
    return median;
}
int  main()
{
    int i,j,k;
    float M1;
    int M2;
    int A[10];
    printf("enter the elements of the array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    M1=mean(A,5);
    M2=median(A,5);
    printf("mean of given numbers is =%f\n",M1);
    printf("median of given numbers is =%d",M2);
    //printf("mean is %d",m);
}
