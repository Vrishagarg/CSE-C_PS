#include<stdio.h>
void main()
{
 double temp=0.0;
    printf("enter the temperature in degree centigrade");
    scanf("%f",&temp);
    if(temp<0)
        printf("It is freezing weather");
    else if(temp>=0&&temp<10)
        printf("It is very cold weather");
    else if(temp>=10&&temp<20)
        printf("It is cold weather");
    else if(temp>=20&&temp<30)
        printf("It is normal temp");
        else if(temp>=30&&temp<40)
            printf("It is hot temp");
        else
            printf("It is very hot temp");

}
