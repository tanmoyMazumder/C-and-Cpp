#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,f=0,k=0,t;
    cin>>a>>b;
    f=b;
    int ar[b];
    for(int i=0;i<b;i++) cin>>ar[i];

    int n = sizeof(ar)/sizeof(ar[0]);
    sort(ar, ar+n);
////////////
/*for(int i=0;i<b;i++) cout<<ar[i]<<" ";
        cout<<"\n";/////////////*/
    f=ar[0];
    for(int i=1;i<b;i++)
    {
        if(f!=ar[i])
        {
            f=ar[i];
            if(ar[i]!=0 && ar[i]!=a) k++;
        }
    }



    if(ar[b]==a)cout<<k<<"\n";
    else if(ar[0]==0) cout<<k-1<<"\n";
    else cout<<k+1<<"\n";





    return 0;
}











