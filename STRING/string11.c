//Program to remove whitespace from the beginning, end, or both beginning and end, of a string
#include<string.h>
#include<stdio.h>
void main()
{
    char str[101];
    char nstr[101];
    int i=0,j=0;
    int l;
    printf("enter the string\n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
       nstr[j]=str[i];
       j++;

        }
        i++;
    }
    printf("the new string after removing the whitespaces are:\n");
    puts(nstr);
}
