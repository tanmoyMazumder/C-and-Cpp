#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,ac,bc,i,j;
    cin>>t;
    for(j=0; j<t; j++)
    {
        ac=bc=0;
        cin>>n;
        char a[n],b[n];
        cin>>a>>b;
        for(i=0; i<n; i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'
                ||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
                ac++;
        }
        for(i=0; i<n; i++)
        {
            if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'
                ||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
                bc++;
        }
        if(ac>bc)cout<<"First String\n";
        else if(bc>ac) cout<<"Second String\n";
        else cout<<"Equal\n";

    }




    return 0;
}












