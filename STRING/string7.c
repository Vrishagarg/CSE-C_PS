#include<string.h>
#include<stdio.h>
void main()
{
    char str[101];
    char str1[101];
    char nstr[101];
    int i=0,j=0;
    printf("enter the first string\n");
    gets(str);
    printf("enter the second string\n");
    gets(str1);
    while(str[i]!='\0')
    {
       nstr[j]=str[i];
        j++;
        i++;
    }
   // nstr[j]=' ';
   // j++;
    i=0;
    while(str1[i]!='\0')
    {
       nstr[j]=str1[i];
        j++;
        i++;
    }

    printf("the concatenated string is:");
    puts(nstr);
}

