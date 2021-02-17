#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,i,t,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int sum=0;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>a;
            sum+=a;
        }
        printf("Case %d: %d\n",i+1,sum);
    }

    return 0;
}

























