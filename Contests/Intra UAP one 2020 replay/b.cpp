#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T,t=0,n,m,y;
    string s;
    cin>>T;
    while(t<T)
    {
        cin>>n>>m;
        char a[n][m],x;
        cin>>s;
        int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[k]<=90 && s[k]>=65)
                {
                    a[i][j]=s[k];
                    k++;
                }
                else a[i][j]=32;
            }
        }

        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            int g=((y<m)?y:(y%m));
            if(x=='U')
            {
                //char temp=a[0][i];
                for(int b=0;b<g;b++)
                {
                    char temp=a[0][i];
                    for(int c=0;c<m-1;c++) {
                            a[c][i]=a[c+1][i];

                    }//one whole shift

                    //////check begin
                    /*for(int i=0;i<n;i++)
                        {
                            for(int j=0;j<m;j++) cout<<a[i][j];

                cout<<"\n";

        }

        cout<<"\n";*////////check end
                    a[m-1][i]=temp;
                }
            }
            else
            {
                //char temp=a[m-1][i];
                for(int b=0;b<g;b++)
                {
                    char temp=a[m-1][i];
                    int c;
                    for(c=m-1;c>=0;c--) a[c][i]=a[c-1][i];//one whole shift
                    a[0][i]=temp;
                }
            }

        }

        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++) cout<<a[i][j];
                //cout<<"\n";
        }
        cout<<"\n";


        t++;
    }





    return 0;
}











