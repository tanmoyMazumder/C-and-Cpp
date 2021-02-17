#include<bits/stdc++.h>

using namespace std;

int check(int x, int y,int z)
{
    int max1=max(x,y);
    max1=max(max1,z);
    if((x==y && y==max1)|| (y==z && z==max1) ||( z==x && x==max1))
        return 1;
    else
        return 0;
}

int main()
{
    int t,i,a,b,c,mini1,mini2;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        int x;int y; int z;
        scanf("%d %d %d",&x,&y,&z);
        if(x==y && y==z)
        {
            cout<<"YES\n"<<x<<" "<<y<<" "<<z<<"\n";
        }
        else
        {
            int m=check(x,y,z);
            mini1=min(x,y);
            mini2=min(y,z);
            int mini=min(mini1,mini2);
            int maxi=max(x,y);
            maxi=max(maxi,z);
            if(m==0)
                cout<<"NO\n";
            else
            {
                cout<<"YES\n";
                cout<<1<<" "<<mini<<" "<<maxi<<"\n";
            }
        }
    }
}
