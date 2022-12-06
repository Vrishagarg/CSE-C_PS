#include<stdio.h>
int palindrome(int n,int temp)
{
    if(n==0)
        return temp;
    else
        temp=(temp*10+(n%10));
    return palindrome(n/10,temp);

}
int main()
{
    int n,n1;
    printf("enter a number\n");
    scanf("%d",&n);
    n1=palindrome(n,0);
    if(n==n1)
        printf("%d is a palindrome number",n);
    else
        printf("%d is a  not palindrome number",n);
}
