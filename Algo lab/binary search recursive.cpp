#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int x,int first, int last)
{
    int mid=(first+last)/2;
    if(arr[mid]==x)
        return mid;

    else
    {
            if(x>arr[mid] && first!=mid)
                return binarySearch(arr,x,mid,last,);

            else if(x<arr[mid] && first!=mid)
                return binarySearch(arr,x,first,mid);

            else return -1;
    }
}


int main()
{
    int n,x,found;

    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"integer to search: ";
    cin>>x;

    found=binarySearch(arr, x,0, n-1, n/2);

    if(found!=-1) cout<< "found at index "<<found;
    else cout<<"not found";

    return 0;
}












