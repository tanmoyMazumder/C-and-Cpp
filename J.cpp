#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/

    int i,j,n,b,h,w,cheapest;
    //cin>>n;
    while(cin>>n>>b>>h>>w)
    {

        cheapest=b;
        int prices[h];
        int beds[h][w],k=0;
        for(i=0;i<h;i++)
        {
            cin>>prices[i];
            for(j=0;j<w;j++)
            {
                cin>>beds[i][j];
                if(beds[i][j]>=n)
                {
                    if((prices[i]*n)<=b && (prices[i]*n)<=cheapest)
                    {
                        cheapest=prices[i]*n;
                        printf("cheapest:%d i:%d j:%d\n",cheapest,i,j);
                        k++;
                    }
                    break;
                }
            }
        }
        if(k==0) cout<<"stay home\n";
        else cout<<cheapest<<"\n";

        //cin>>n;
    }
    return 0;
}

























