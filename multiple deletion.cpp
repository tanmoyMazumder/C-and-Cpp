#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n, numberOfDeletions;

    cin>>n;
    int array[n];

    for(i=0;i<n;i++) cin>>array[i];

    cin>>numberOfDeletions;
    int DeletionPositions[numberOfDeletions];

    for(i=0;i<numberOfDeletions;i++) cin>>DeletionPositions[i];

    for(i=0;i<numberOfDeletions-1;i++)
    {
        for(j=0;j<numberOfDeletions-1;j++)
        {
            if(DeletionPositions[j]<DeletionPositions[j+1])
                swap(DeletionPositions[j],DeletionPositions[j+1]);
        }
    }

    for(i=0;i<numberOfDeletions;i++)
    {
        for(j=DeletionPositions[i];j<n-1;j++) array[j]=array[j+1];
    }

    for(i=0;i<n-numberOfDeletions;i++) cout<<array[i]<<" ";

    return 0;
}
