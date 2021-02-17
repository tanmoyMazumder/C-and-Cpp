#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> s;
    stack <int> s2;
    int n, command, input, max=-1, second_max=-2;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>command;
        if(command==1)
        {
            cin>>input;
            s.push(input);
            if(s2.empty())
                s2.push(input);
            if(input>s2.top())
                s2.push(input);
        }
        else if(command==2)
        {
            if(s.top()==s2.top())
                s2.pop();
            s.pop();

        }

        else
            cout<<s2.top()<<"\n";
    }

    return 0;
}












