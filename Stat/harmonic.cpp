#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;
    float total_x=0, total_1BYx=0, total_logX=0;
    cout<<"number of data N: ";
    cin>>n;
    float a[n][3];
    for(i=0; i<n; i++)
    {
        cin>>a[i][0];
        total_x+=a[i][0];
    }
    for(i=0; i<n; i++)
    {
        a[i][1]=(1/a[i][0]);
        total_1BYx+=a[i][1];
    }
    for(i=0; i<n; i++)
    {
        a[i][2]=log10(a[i][0]);
        total_logX+=a[i][2];
    }

    cout<<"x                  "<<"1/x           "<<"logx           \n";
    for(i=0; i<n; i++)
    {
        printf("%f          %.4f        %.4f\n",a[i][0],a[i][1],a[i][2]);
    }

    cout<<"\n\ntotal x= "<<total_x<<"       total 1/x= "<<total_1BYx<<"     total log x= "<<total_logX<<"\n";





    return 0;
}












