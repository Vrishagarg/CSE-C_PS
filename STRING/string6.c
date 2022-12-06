#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20];
    char str2[20];
    int i=0,j=0;
    char c;
    printf("enter a string\n");
    gets(str1);
    printf("enter a string\n");
    gets(str2);
    while(str1[i]!='/0'&&str2[i]!='/0')
    {
        c=str1[i]-str2[i];

        if(str1[i]==' '&&str2[i]==' ')
       {
            i++;
       }
        else if((str1[i]==' '&&str2[i]!=' ')||(str1[i]!=' '&&str2[i]==' '))
        {
            printf("the strings are not equal\n");
            break;
        }

        else if(c!=0)
        {
            printf("the strings are not equal\n ");
            break;
        }
            i++;
        }
    if(str1[i]=='/0'&&str2[i]=='/0')
        printf("strings are equal");

    }
