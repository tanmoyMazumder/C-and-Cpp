#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,t,n;
   string str;
   int sum = 0;
   cin >> t;

   for (int i = 1; i <= t; i++)
    {
       cin >> n;
       sum = 0;
       cout << "Case " << i <<":\n";
       for (int i = 0; i < n; i++)
        {
           cin >> str;
           if(str == "donate")
            {
               cin >> a;
               sum=sum+ a;
           }
           else {
               cout << sum <<"\n";
           }

       }
   }

}

