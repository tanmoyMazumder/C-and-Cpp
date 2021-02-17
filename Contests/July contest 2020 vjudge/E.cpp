#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,j,k,r,n;
    char a[1000000];
    cin>>r;
    for(i=0; i<r; i++)
    {
        scanf("%s",a);
        cin>>n;
        char x[2][n];
        for(j=0; j<n; j++)
        {
            cin>>x[0][j];
            cin>>x[1][j];
        }
        for(k=0; k<strlen(a); k++)
        {
            for(j=0; j<n; j++)
            {
                if(x[1][j]==a[k])
                {
                    a[k]=x[0][j];
                }
            }

        }
        puts(a);
        cout<<"\n";
    }

    return 0;
}
