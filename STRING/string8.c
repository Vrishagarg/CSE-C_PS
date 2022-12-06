#include<string.h>
#include<stdio.h>
void main()
{
    int i=0;
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
    printf("the prefixes of the string are=\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}

