#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[100];
    gets(arr);
    int length=strlen(arr),k=0;

    for(int i=0; i<=(length/2);i++)
    {
        if(arr[i]!=arr[length-i-1]) k++;
    }

    if(k==0) cout<<"Palindrome";
    else cout<<"Not a palindrome";

    return 0;
}
