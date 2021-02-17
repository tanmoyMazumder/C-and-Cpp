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
        int total_count=0;
        cin>>s;
        for(int i=0; i<s.size(); i++)  arr[s[i]-97]++;
        for(int i=0; i<26; i++) if(arr[i]!=0) total_count++;
        cout<<s.size()%total_count<<"\n";



    }






    return 0;
}












