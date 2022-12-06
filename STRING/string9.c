#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    int l=0;
    int j=0;
    char str[101];
    printf("enter the string\n");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
        l++;
    }
    for(i=l;i>=0;i--)
    {
        for(j=l;j>=i;j--)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
