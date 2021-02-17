#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,i,j,counter=0;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for(i=0; i<n; i++)
        for(j=0;j<n;j++)
            if((i!=j )&& (v[i]+v[j]==10)) counter++;

    cout<<counter/2;

    return 0;
}












