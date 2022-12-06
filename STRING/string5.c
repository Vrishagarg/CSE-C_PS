#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    char nstr[20];
    int l=0,i;
    printf("enter a string\n");
    gets(str);
    /*while(str[i]!='\0')
    {
        l++;
        i++;
    }
    for(i=0;i<=l;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            nstr[i]=str[i]+32;
        else
            nstr[i]=str[i]-32;
    }*/
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            nstr[i]=str[i];
            i++;
        }
      else if(str[i]>='A'&&str[i]<='Z')
            {
                nstr[i]=str[i]+32;
                i++;
            }
      else
            {
                nstr[i]=str[i]-32;
                i++;
            }
    }
    puts(nstr);
    //for(i=0;i<l;i++)
    //printf("the new string after the conversion of cases=\n%c",nstr[i]);
}

