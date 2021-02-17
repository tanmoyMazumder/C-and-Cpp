#include<bits/stdc++.h>

using namespace std;

int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

    int t,sizeS;
    string S,T;
    char temp;
    cin>>t;
    for(int k=0; k<t; k++)
    {

        cin>> S >>T;
        sizeS=S.size();
        S=S+T;
        sort(S.begin(), S.end());
         for(int j=0; j<sizeS;j++)cout<<S[j];

        cout<<"\n";
    }


    return 0;
}













