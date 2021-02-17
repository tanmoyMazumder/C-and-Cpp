#include<bits/stdc++.h>
using namespace std;
int arr[100];
int Find_max_subArray(int left, int cross, int right)
{
    if(left>=cross && left>=right)
        return cross;

    else if(cross>=left && cross>=right)
        return cross;

    else return right;
}
int max_cross(int arr[], int low, int mid, int high)
{
    int sum_left=0,sum_1=0;
    for(int i=mid; i>=low; i--)
    {
        sum_1=sum_1+arr[i];
        if(sum_1>sum_left)
            sum_left=sum_1;
    }

    int sum_right=0, sum_2=0;
    for(int i=mid+1; i<=high; i++)
    {
        sum_2=sum_2+arr[i];

        if(sum_2>sum_right)
            sum_right=sum_2;
    }
    return Find_max_subArray(sum_left, sum_right, sum_left+sum_right);
}
int max_sub_array(int arr[], int low, int high)
{
   int result;
   if(low==high)
        return arr[low];

   else
   {
        int mid=(low+high)/2;
        return Find_max_subArray(max_sub_array(arr, low, mid),
                             max_sub_array(arr, mid+1, high),
                             max_cross(arr, low, mid, high));
   }
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
    for(int i=0; i<n; i++)
     cin>>arr[i];
    int r=max_sub_array (arr, 0, n-1);
    cout<<r;
}
