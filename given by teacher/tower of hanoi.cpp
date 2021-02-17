#include<bits/stdc++.h>

using namespace std;

void toh(int n,char s, char a, char t)
{
    if(n==0) return;
    else
    {
        toh(n-1,s,t,a);
        cout<<"move disk #"<<n<<" from "<<s<<" to "<<t<<"\n";
        toh(n-1,a,s,t);
    }
}

int main()
{
    int n;
    char s,a,t;
    cin>>n>>s>>a>>t;
    toh(n,s,a,t);
}
