#include<bits/stdc++.h>

using namespace std;

long long conversion(long long decimal_number, int n)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % n + 10 *
                conversion(decimal_number / n,n));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,b,i;
    long long n,p;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int f=0;
        cin>>n>>p;
        for(b=2;b<11;b++)
        {
            if(n==conversion(p-1,b))
            {
                cout<<b<<"\n";
                f++;
                break;
            }
        }
        if(f==0) cout<<-1<<"\n";
    }

    return 0;
}











