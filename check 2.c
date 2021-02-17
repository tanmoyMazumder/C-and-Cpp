#include<stdio.h>
#include<string.h>

int round(float num)
{
    int n;
    n=(int)num;
    if (num-n==0) return n;
    else return n+1;
}
int perfectdivide(int a, int b)
{
    int c;
    float d;
    d=(float)a/b;
    return round(d);
}
int main()
{
    int a,b,c;
    float d;
    scanf("%d %d",&a,&b);
    c=perfectdivide(a,b);
    printf("%d",c);

}
