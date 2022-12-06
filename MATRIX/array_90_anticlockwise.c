#include<stdio.h>
void main()
{
    int m,n,i,j;
    printf("enter the value of m\n");
    scanf("%d",&m);
    printf("enter the value of n\n");
    scanf("%d",&n);
    int a[m][n];
    int arr[m][n];
    printf("enter the elements of the array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=a[j][n-1-i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
