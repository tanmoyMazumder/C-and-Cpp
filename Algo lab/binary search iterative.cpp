#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x, first, last, mid;
    bool found=false;
    cin>>n;
    first=0; last=n-1; mid=n/2;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"integer to search: ";
    cin>>x;

    while(found==false && first!=mid)
    {
        if(x>arr[mid])
        {
            first=mid+1;
            mid=(first+last)/2;
        }
        else if(x<arr[mid])
        {
            last=mid-1;
            mid=(first+last)/2;
        }
        else
            found=true;
    }

    if(found==true) cout<< "found at index "<<mid;
    else cout<<"not found";

    return 0;
}












