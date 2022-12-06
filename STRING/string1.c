#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,l=0;
    char str[20];
  printf("enter the string");
gets (str);
while(str[i]!='\0')
{
    l++;
    i++;
}
printf("The length of string is:%d",l);

}
