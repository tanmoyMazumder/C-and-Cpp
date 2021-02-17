#include<bits/stdc++.h>

using namespace std;
int c=0;

int transformer(char s)
{
    if(s=='A') return 1;
    if(s=='K') return 2;
    if(s=='Q') return 3;
    if(s=='J') return 4;
    if(s=='2') return 5;
}

void insertion(int array[],int array_size,int whereToputin,int whatToPutIn)
{
    int i;
    for(i=array_size-2; i>=whereToputin; i--)
    {
        array[i+1]=array[i];
        c++;
    }
    array[whereToputin]=whatToPutIn;
}

void Count(int a[])
{
    for(int i=1; i<5; i++)
    {
        for(int j=i; j>=0; j--)
        {
            if(a[j]>a[i] && a[j-1]<=a[i])
            {
                int whatToPutin=a[i];
                int whereToputin=j;
                int sizeTosend=i+1;
                insertion(a,sizeTosend,whereToputin,whatToPutin);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,values[5];
    char hand[5];
    gets(hand);

    for(i=0;i<5;i++)
    {
        values[i]=transformer(hand[i]);
    }
    Count(values);

    cout<<c;

    return 0;
}

























