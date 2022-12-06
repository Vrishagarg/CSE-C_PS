#include<stdio.h>
int fact(int n)
{

    int f=1;
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
        else
        return(n*fact(n-1));

}
int main()
{
    int n,factorial;
    printf("enter the value of n\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("factorail=:%d",factorial);
}
