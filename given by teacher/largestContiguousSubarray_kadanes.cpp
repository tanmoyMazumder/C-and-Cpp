#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, max, cs,i, current_max_start, max_subarray_size=0;
    max=cs=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>> a[i];
        cs+=a[i];
        if(cs>max)
            max=cs;

        max_subarray_size++;

        if(cs<0)
        {
            cs=0;
            current_max_start=&a[i];
            current_max_start++;
            max_subarray_size=0;
        }

    }

    for(i=1; i<max_subarray_size; i++)
    {
        printf("%d ",*current_max_start);
        current_max_start++;
    }
    cout<<"\n max: "<<max<<"\n";

    return 0;
}












