#include<bits/stdc++.h>

using namespace std;
int isAConsonant(char c)
{
    int f=0;
    if((c>65 && c<69)|| (c>69 && c<73) ||(c>73 && c<79)||(c>79 && c<85)||(c>85 && c<91))
    {
        f++;
        cout<<"\n"<<c<<"is a consonant\n";
    }
    return f;
}


int main()
{
    string s;
    cout<<"\nOutput of problem 15: \n";
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int ref[26]={0},comp[26]={0},max_number=-1,x,pos;
    for(int i=0;i<s.size();i++)ref[s[i]-65]++;
    for(int i=0;i<26;i++)
    {
         x=i+65;
        cout<<(char)x<<":"<<ref[i]<<"\n";
        if(ref[i]>max_number) {
            max_number=ref[i];
            pos=i;
        }

    }
    pos=pos+65;
    cout<<"maximum occurrences:"<<(char)pos<<"\n";






    return 0;
}












