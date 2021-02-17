#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, count=0;
    cin>>n;
    int arr[n], data[101]={0};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        data[arr[i]]++;
    }

     for(int i=0; i<101; i++)
            count+=(data[i]/2);

    cout<<count<<"\n";

    return 0;
}












