#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i,j,position,target=777;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){cin>>a[i];}

        cin>>position;
    for(i=n-1; i>=position; i--)
    {
        a[i+1]=a[i];
    }
    a[position]=target;
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";



    return 0;
}
























