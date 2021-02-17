#include<bits/stdc++.h>

using namespace std;

int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

    int t;
    string S,T;
    char temp;
    cin>>t;
    for(int k=0; k<t; k++)
    {
//        scanf("%s",&S);
//        scanf("%s",&T);
        cin>> S >>T;
        sort(T.begin(), T.end());

        for(int i=0; i<T.size(); i++)
        { //cout<<"size of S and t: "<<S.size()<<" "<<T.size()<<"\n";
            for(int j=0; j<S.size(); j++)
            {
                if(T[i]<S[j])
                {
                    //cout<<i<<" "<<j<<" hoise\n";
                    temp=S[i];
                    S[j]=T[i];
                    T[i]=temp;
                    break;
                }
            }

        }

        cout<<S<<"\n";
       // cin>>temp;
    }


    return 0;
}












