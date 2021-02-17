
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a1[100],a2[100];
    int k=0,i;
    gets(a1);
    for( i=0;i<strlen(a1);i++)
    {
        a2[i]=a1[strlen(a1)-i-1];
    }
    for(i=0;i<strlen(a1);i++)
    {
        if(a1[i]!=a2[i])k++;
    }
    if(k==0) cout<<"pal";
    else cout<<"aint";
}
