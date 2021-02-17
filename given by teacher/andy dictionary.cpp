#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    string a;
    while(cin>>a)
    {
        transform(a.begin(),a.end(), a.begin(), :: tolower);
        s.insert(a);
    }
    std::set<std::string>::iterator it = s.begin();

    while (it != s.end())
{
    std::cout << (*it) << "\n";
    it++;
}
}
