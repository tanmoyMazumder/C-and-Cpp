#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,amount,i=0, totalNumberOfCoins=0, numberOfCoins;
    cin>>n>>amount;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i]; //considering that the inputs are gonna be sorted in descending order

    while(amount>0 && i<n-1)
    {
        numberOfCoins=0;
        if(amount==0)
            break;
        else if(arr[i]<=amount)
        {
            numberOfCoins=amount/arr[i];
            totalNumberOfCoins+=numberOfCoins;
            cout<<numberOfCoins<< " coins of "<<arr[i]<<" taka needed\n";
            amount= amount%arr[i];
        }
        i++;

    }
     cout<<"\ntotal "<<totalNumberOfCoins<<" needed\n";

    return 0;
}












