#include<string.h>
#include<stdio.h>
void main()
{
    char str[101];
    char Dat[27]={0};
    int i=0,l;
    printf("enter the string");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
        l++;
        if(str[i]>=65 &&str[i]<=90)
            Dat[str[i]-65]++;
        if(str[i]>=97&&str[i]<=122)
            Dat[str[i]-97]++;
    }
    for(i=0;i<l;i++)
   {
        if(Dat[i]!=0)
        printf("%c=%d\n",i+97,Dat[i]);
   }
}
