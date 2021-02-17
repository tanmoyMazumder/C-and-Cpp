
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,q,x;
    vector <int> v;
    char c;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>q;
        for(int j=0; j<q; j++)
        {
            cin>>c;
            if(c=='a')
            {
                cin>>x;
                v.push_back(x);
            }
            if(c=='b')  sort(v.begin(),v.end());
            if(c=='c')  reverse(v.begin(), v.end());
            if(c=='d')  cout<<v.size()<"\n";
            if(c=='e')  for(int h=0; h<v.size(); h++)   cout<<v[h]<<" ";
            if(c=='f')  sort(v.begin(),v.end(),greater<int>());
        }

    }
}
