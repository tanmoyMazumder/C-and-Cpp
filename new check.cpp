#include<iostream>
using namespace std;
int multiply(int x,int y)
{
    return x*y;
}
double multiply(double x,int y)
{
    return x*y;
}


int main()
{
    cout<<multiply(3.1,2);
}
