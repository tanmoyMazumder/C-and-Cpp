#include<bits/stdc++.h>

using namespace std;

int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
double sum(double a,double b)
{
    return a+b;
}






void  display_reverse(int a,int b)
{
    cout<<b<<" "<<a;
}

void  display_reverse(char a,char b)
{
    cout<<b<<" "<<a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a=2, b=3;
    double x=2.5,y=3.2;
    float p=0.4,s=0.6;

    cout<<sum(2,5,7)<<"\n";
    cout<<sum(2,5)<<"\n";
    cout<<sum(2.4,3.2)<<"\n";

    return 0;
}












