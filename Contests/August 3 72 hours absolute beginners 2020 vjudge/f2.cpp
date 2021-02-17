#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,i,j,n,a,sum;
    char s[6];
    cin>>t;
    for(i=0;i<t;i++)
    {
        sum=0;
        cin>>n;
        printf("Case :%d\n",i+1);
        j=0;
        while(j<n)
        {
            cin>>s;
            if(s[0]=='d')
            {
                cin>>a;
                sum+=a;
            }
            else printf("%d\n",sum);

            j++;
        }
    }

    return 0;
}












