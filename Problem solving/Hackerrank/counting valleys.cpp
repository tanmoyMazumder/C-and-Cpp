#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, level=0, count=0;
    cin>>n;
    char  input;
    stack<char>s;
    for(int i=0; i<n; i++)
    {
        cin>>input;

        if(s.empty())
        {
            if(input=='D' )
                count++;
            s.push(input);
        }
        else
        {
            if(input=='D' && s.top()=='U')
                s.pop();
            else if(input=='U' && s.top()=='D')
                s.pop();
            else
                s.push(input);
        }
    }

    cout<<count;

    return 0;
}












