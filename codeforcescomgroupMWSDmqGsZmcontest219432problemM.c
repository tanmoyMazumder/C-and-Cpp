#include<stdio.h>

int check(int n)
{
    int k=0;
    while(n>0&&k==0)
    {
        if((n%10==4)||(n%10==7))
            k=0;
        else
            k++;
        n=n/10;
    }
    return k;

}

int main()
{
    int a,b,i,k,m=0,c;
    scanf("%d %d",&a,&b);
    for(i=a; i<=b; i++)
    {
        c=check(i);
        if(c==0)
        {
            printf("%d ",i);
            m++;
        }
    }
    if(m==0)printf("-1");
}







