#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,point=0,flag;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    b[0]=a[0];
    for(int i=1; i<n; i++)
    {
        flag=0;
       // cout<<"comparing a and b for"<<i<<"\n";
        for(int j=0; j<=point; j++)
        {
            if(a[i]==b[j])
            {
                flag++;

                //cout<<a[i]<<"milse\n";
                break;
            }
        }
        if(flag==0)
        {
            cout<<point<<" point before increment\n";
            point++;
            b[point]=a[i];
                        cout<<point<<" point after increment\n";

            cout<<"b te"<<a[i]<<" rakhsi\n";
        }
    }
    for(int i=0; i<point+1; i++)
        cout<<b[i];
}









