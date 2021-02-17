#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[2*n],b[n];
        for(int j=0;j<2*n;j++) cin>>a[j];
        b[0]=a[0];
        int k=0;
        for(int j=1;j<2*n;j++)
        {
            int flag=0;
            for(int m=0;m<=k;m++)
            {
                if(a[j]==b[m])flag++;
            }
            if(flag==0)
            {
                k++;
                b[k]=a[j];
            }
        }
        for(int j=0;j<n;j++) cout<<b[j]<<" ";
        cout<<"\n";
    }
}
