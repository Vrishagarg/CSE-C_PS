#include<math.h>
#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the first co-ordinate axes");
    scanf("%d",&x);
    printf("enter the second co-ordinate axes");
    scanf("%d",&y);
    if(x>0&&y>0)
        printf("it is first quadrant");
    else if(x<0&&y>0)
    printf("it is the second quadrant");
    else if(x<0&&y<0)
        printf("it is the the third quadrant");
    else
        printf("it is the fourth quadrant");


}
