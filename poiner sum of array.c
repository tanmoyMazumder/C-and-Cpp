#include<stdio.h>
int main()
{
    int n,i,*p,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf(" %d",sum);
}
