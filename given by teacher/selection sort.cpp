#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,j,currentMin,t, index;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) cin>>a[i];

    for(i=0; i<n; i++)
    {
        currentMin=*min_element(a+i,a+n);
        index = std::distance(a, std::find(a+i, a +n ,currentMin));

        for(j=index-1; j>=i ; j--)
        {
            a[j+1]=a[j];
        }
        a[i]=currentMin;

    }


    for(i=0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}












