#include<math.h>
#include<stdio.h>
void main()
{

    int a,b,c;
    printf("enter the three numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c)
        printf("%d is the greatest number",a);
    else if(b>a&&b>c)
        printf("%d is the greatest number",b);
    else
        printf("%d is the greatest number",c);

}
