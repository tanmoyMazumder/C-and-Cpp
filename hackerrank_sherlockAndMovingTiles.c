#include<stdio.h>
#include<math.h>
int main()
{
    long long int l,s1,s2,Q,q,i;
    double t;
    scanf("%lld %lld %lld %lld",&l,&s1,&s2,&Q);
    for(i=1;i<=Q;i++)
    {
        scanf("%lld",&q);
        t=((sqrt(2)*l)-sqrt(2*q))/(s1-s2);
        printf("%lf\n",fabs(t));
    }
}
