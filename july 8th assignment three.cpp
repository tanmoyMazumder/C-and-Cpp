#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,k=0;
    char a[100],b[100],alist[26]={0},blist[26]={0};
    gets(a);
    gets(b);

    for(i=0;i<strlen(a);i++) alist[a[i]-97]++;
    for(i=0;i<strlen(b);i++) blist[b[i]-97]++;

    for(i=0;i<26;i++)
    {
        if(alist[i]!=blist[i]) k++;
    }

    if(k==0) cout<<"Equivalent";
    else cout<<"Not equivalent";

    return 0;
}
