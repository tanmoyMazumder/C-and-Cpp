#include<iostream>
using namespace std;
int main()
{
    int t,i,c,count=0;
    cin>>t;
    while(t!=0)
    {
        count++;
        int a=0,b=0;
        for(i=0;i<t;i++)
        {
            cin>>c;
            if(c==0)b++;
            else a++;
        }
        cout<<"Case "<<count<<": "<<a-b<<"\n";
        cin>>t;
    }








}
