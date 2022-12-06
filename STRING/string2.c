#include<stdio.h>
#include<string.h>
void main()
{
int i=0,l=0;
    char str[20];
    char nstr[20];
  printf("enter the string\n");
gets (str);
while(str[i]!='\0')
{
    l++;
    i++;
}
int j=0;
for(i=l-1;i>=0;i--)
{
    nstr[j]=str[i];
    j++;
}
printf("the original string is\n");
for(i=0;i<l;i++)
    printf("%c",str[i]);
printf("\n the new string is\n" );
for(i=0;i<l;i++)
    printf("%c",nstr[i]);
}


