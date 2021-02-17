#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j,small,a[n],b[n]={0};

    for(i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]!=a[j]) b[i]=b[i]+a[j];
        }
    }

    small=b[0];
    for(i=1;i<n;i++)
    {
        if(small>b[i]) small=b[i];
    }
    cout<<small;

    return 0;
}
