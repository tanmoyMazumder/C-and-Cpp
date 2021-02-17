#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i,t;
    long long int r,a,b,x,y,counta,countb;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>y>>a>>b;
        counta=abs(x-y);
        countb=(x<y)?x:y;
        r=(long long int)((counta*a)+(countb*b));
        cout<<r<<"\n";
    }
    return 0;
}
