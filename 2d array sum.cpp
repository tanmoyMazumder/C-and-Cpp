#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,j,sum=0;
    cin>>a>>b;
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>arr[i][j];
            sum=sum+arr[i][j];
        }
    }
    cout<<sum;
    return 0;
}
