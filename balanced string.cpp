#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=1,j,count1=1,count2=1,subs=0;
    char a[100],reference;
    gets(a);
    reference=a[0];
    while(a[i]!='\0')
    {
        cout<<"i="<<i<<"\n";

        while(reference==a[i] && a[i]!='\0')
        {
            count1++;
            i++;
            cout<<"in first while i="<<i<<"\n";
        }
        reference=a[i];
        while(reference==a[i] && a[i]!='\0')
        {
            count2++;
            i++;
            cout<<"in second while i="<<i<<"\n";
        }
        reference=a[i];
        if(count1>=count2)
        {
            subs++;
            count1=1;
            count2=1;
        }
    }
    cout<<"subs"<<subs;

    return 0;
}
