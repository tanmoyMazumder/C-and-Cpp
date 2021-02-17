#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    string s;
    map<string, int> m;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        cin>>s;
        m[s]++;
        if(m[s]>1)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }


}
