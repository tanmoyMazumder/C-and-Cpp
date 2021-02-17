#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(((a*b)%2)==0) cout<<(a*b)/9<<"\n";
        else cout<<((a*b)/9)-1<<"\n";
    }





    return 0;
}












