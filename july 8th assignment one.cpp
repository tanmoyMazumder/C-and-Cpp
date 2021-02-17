#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0,i,j,a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++) if((a[i]+a[j])%3==0)count++;
    }

    cout<<count/2;

    return 0;
}
