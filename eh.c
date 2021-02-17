#include<stdio.h>
int main()
{
    int a,b;
    float x,y,z;
    printf(" enter thy float ");
    scanf("%f",&x);
    a=(int)x;
    y=x-a;
    z=y*100;
    b=(int)z;
    printf("%d",b);
}
