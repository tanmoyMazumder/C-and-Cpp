#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);  */

    int dx,dy,t,x,y;
    cin>>t;
    while(t!=0)
    {
        cin>>dx>>dy;
        for(int i=0;i<t;i++)
        {
            cin>>x>>y;
            if(dx==x || dy==y) cout<<"divisa\n";
            else if(x>dx && y>dy) cout<<"NE\n";
            else if(x<dx && y>dy) cout<<"NO\n";
            else if(x>dx && y<dy) cout<<"SE\n";
            else if(x<dx && y<dy) cout<<"SO\n";
        }
        cin>>t;
    }

    return 0;
}

























