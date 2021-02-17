#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if((sqrt((a*a)+(b*b))==c)||(sqrt((b*b)+(c*c))==a)||(sqrt((a*a)+(c*c))==b)) printf("Case %d: yes\n",i+1);
        else printf("Case %d: no\n",i+1);
    }

    return 0;
}

























