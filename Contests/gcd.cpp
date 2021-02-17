
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=(a>b?a:b); i<100000000; i++)
        if(i%a==0 && i%b==0)
            break;
    cout<<i<<"\n";

    return 0;
}











