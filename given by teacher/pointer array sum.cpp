#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,*ptr,sum=0;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++) cin>>array[i];

    ptr=&array[0];
    for(int i=0;i<n;i++) sum+=*ptr++;

    cout<<"sum:"<<sum<<"\n";

    return 0;
}











