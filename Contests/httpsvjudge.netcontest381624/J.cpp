#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/

    int n,i,hi,lo,hp,lp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    hi=lo=a[0];

    for(i=1;i<n;i++)
    {
        if(hi<a[i]) hi=a[i];
        if(lo>a[i]) lo=a[i];
    }

    for(i=0;i<n;i++)
        if(hi==a[i])
        {
            hp=i;
            break;
        }
    for(i=n-1;i>0;i--)
        if(lo==a[i])
        {
            lp=i;
            break;
        }

    if(hp<lp) cout<<hp+n-lp-1<<"\n";
    if(hp>lp) cout<<hp+n-lp-2<<"\n";

    printf("hi: %d lo:%d\n",hi,lo);
    printf("hp: %d lp:%d\n",hp,lp);





    return 0;
}












