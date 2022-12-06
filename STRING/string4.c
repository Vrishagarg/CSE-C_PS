#include<stdio.h>
void main()
{
    int i=0,j=0;
    int c=0;
    char str[20];
    char nstr[20];
    printf("enter a string\n ");
    gets(str);
    while(str[i++]!='\0')
    {
        if(str[i]==' ')
            c++;

    }
    printf("No of words in a paragraph are %d",c+1);
}
