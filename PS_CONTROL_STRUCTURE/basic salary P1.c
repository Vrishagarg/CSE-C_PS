// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int bs=0;
     char gra;
    int allow=0;
    int  ts=0;
    double hra,da,pf=0.0;
    printf("enter the basic pay");
    scanf("%d",&bs);
    printf("enter the grade");
    scanf(" %c",&gra);
    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    if (gra=='A')
    allow=1700;
   else  if (gra=='B')
    allow=1500;
    else
    allow=1300;
    ts=bs+hra+da+allow-pf;
    printf("total salary is %d",ts);


    return 0;
}
