#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y,w;
    cin>>y>>w;
    if((y>w?y:w)==1) cout<<"1/1\n";
    if((y>w?y:w)==2) cout<<"5/6\n";
    if((y>w?y:w)==3) cout<<"2/3\n";
    if((y>w?y:w)==4) cout<<"1/2\n";
    if((y>w?y:w)==5) cout<<"1/3\n";
    if((y>w?y:w)==6) cout<<"1/6\n";

    return 0;
}

























