#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, cs,i, startIndex, endIndex, potatoMax,k=0;
    cs=startIndex=endIndex=0;
    int max[2]={0,0}

    cin>>n;
    int a[n];
    cin>>a[0];
    potatoMax=a[0];

    for(i=1; i<n; i++)
    {
        cin>> a[i];
        cs+=a[i];
        endIndex++;
        if(cs>potatoMax)
        {
            potatoMax=cs;
        }

        if(cs<0)
        {
            cs=0;
            startIndex=i;
            max[0]=potatoMax;
            if ( )
        }
    }
    cout<<"sub array: ";
    for(i=startIndex; i<endIndex+1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n max: "<<max<<"\n";

    return 0;
}













