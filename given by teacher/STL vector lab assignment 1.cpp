#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,i,Sum=0;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<v.size();i++)  Sum += v[i];

     cout<<Sum;
}
