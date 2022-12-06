#include<stdio.h>
int prime(int N)
{
    int i;
    int count=0;
    for(i=1;i<=N;i++)
    {

        if(N%i==0)
            count++;
    }

    return(count);
}

int main()
{
    int l,h,j,c;
    printf("Enter the lower limit\n");
    scanf("%d",&l);
    printf("Enter the upper limit\n");
    scanf("%d",&h);
    printf("the list of prime numbers in the range %d and %d \n ",l ,h);
    for(j=l;j<=h;j++)
    {
        c=prime(j);
        if(c==2)
        {
            printf("%d\n",j);

        }
    }

}

