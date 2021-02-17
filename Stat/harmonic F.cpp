#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;
    float total_x=0, total_1BYx=0, total_logX=0,total_F=0, total_1BYxF=0, total_logXF=0,total_fx=0;
    cout<<"number of data N: ";
    cin>>n;
    float a[n][3],b[n][3],fx[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i][0];
        cin>>b[i][0];
        total_x+=a[i][0];
        total_F+=b[i][0];
        fx[i]=a[i][0]*b[i][0];
        total_fx+=fx[i];
    }
    for(i=0; i<n; i++)
    {
        a[i][1]=(1/a[i][0]);
        b[i][1]=b[i][0]*a[i][1];
        total_1BYx+=a[i][1];
        total_1BYxF+=b[i][1];
    }
    for(i=0; i<n; i++)
    {
        a[i][2]=log10(a[i][0]);
        b[i][2]=a[i][2]*b[i][0];
        total_logX+=a[i][2];
        total_logXF+=b[i][2];
    }

    cout<<"\n\nx                  f                  fx                  1/x         f(1/x)        logx         f(logx) \n";
    for(i=0; i<n; i++)
    {
        printf("%f----------%f----------%f---------%.4f--------%.4f--------%.4f--------%.4f\n",a[i][0], b[i][0],fx[i], a[i][1], b[i][1], a[i][2], b[i][2]);
    }

    printf("\n\ntotal x=%f      total f=%f      total fx=%f      total 1/x=%f      total f(1/x)=%f      total logx=%f      total f(logx)=%f",
           total_x,total_F,total_fx,total_1BYx,total_1BYxF,total_logX,total_logXF);





    return 0;
}













