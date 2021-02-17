#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,l,d,sum,i,j;
    char command[6];

    cin>>t;
    for(i=0;i<t;i++)
    {
        sum=0;
        cin>>l;
        printf("Case %d:\n",i+1);
        j=0;
        while(j<l)
        {
          //printf("j1:%d\n",j);
          scanf("%s",command);
          //printf("%d\n",strcmp(command,"donate"));
          if(strcmp(command,"donate")==0)
          {
              cin>>d;printf("donation:%d\n",d);
              sum+=d;printf("sum:%d\n",sum);
          }
          else cout<<sum<<"\n";
          //printf("j2:%d\n",j);
          j++;
        }
    }

    return 0;
}












