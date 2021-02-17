#include<bits/stdc++.h>

using namespace std;

long double base_raised_to_int(float base, float power)
{
    power=power*10;
    cout<<"func 1 "<<power<<"\n";
    long double r=1;
    for(int i=1;i<=power;i++)
        r=r*base;
    cout<<"func 1 "<<r<<"\n";
    return r;
}

long double base_raised_to_fraction(float base)
{
    long double r=1;
    for(int i=1;i<=10;i++)
        r=r*base;
        cout<<"func 2 r:"<<r<<"\n";
        cout<<"func 2 r:"<<(1/r)<<"\n";
    return (1/r);
}
int main()
{

    double base, power;
    long double result;
    cin>>base;
    cout<<" to the power ";
    cin>>power;
    result=base_raised_to_int(base, power)*base_raised_to_fraction(base);
    cout<<result;






    return 0;
}












