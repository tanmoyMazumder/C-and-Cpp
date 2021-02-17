#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,j,k, flag,amount;
    cin>>t;

    for(k=0; k<t; k++)
    {
        flag=0;
        cin>>amount>>n;
        int arr[n];
        for( i=0; i<n; i++)
            cin>>arr[i];

        for( i=0; i<n; i++)
        {
            for( j=i+1; j<n; j++)
            {
                    if(arr[i]+arr[j]==amount)
                    {
                        flag=1;
                        break;
                    }
            }

            if(flag==1)
                break;
        }

        cout<<i+1<<" "<<j+1<<"\n";
    }


    return 0;
}
















//https://meet.google.com/fcd-fttz-zvp




