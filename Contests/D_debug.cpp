#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        int arr[26]={0};
        int total_letters=0;
        cin>>s;
        for(int i=0; i<s.size(); i++)  arr[s[i]-97]++;
        for(int i=0; i<26; i++) if(arr[i]!=0) total_letters++;

        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr,arr+n);

        for(int i=0; i<26; i++)
        {
            if(arr[i]!=0)
            {
                cout<<(char)(i+97)<<"-"<<arr[i]<<" ";
            }
        }
        cout<<"\n"<<s.size()%total_letters<<"\n";



    }






    return 0;
}













