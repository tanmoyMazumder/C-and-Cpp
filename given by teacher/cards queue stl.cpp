#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        queue<int> q;
        for(int i=1; i<=n; i++)   q.push(i);

        while(q.size()>1)
        {
            int o=q.front();
            cout<<o<<", ";
            q.pop();
            o=q.front();
            q.push(o);
            q.pop();
        }
        int o=q.front();
        cout<<"\n"<<o<<"\n";
        cin>>n;

    }

    return 0;
}












