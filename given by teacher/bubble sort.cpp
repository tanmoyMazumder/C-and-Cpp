#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,j,k,t;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) cin>>a[i];

    for(i=0; i<n ; i++)
    {
        k=0;
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                k=1;
            }
        }
        if(k==0) break;
    }

    for(i=0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}












