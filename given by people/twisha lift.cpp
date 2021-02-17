#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,me,lift;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>me>>lift;
        cout<<"Case "<<i<<": "<<(me*4)+(abs(me-lift)*4)+19<<"\n";
    }

    return 0;
}
