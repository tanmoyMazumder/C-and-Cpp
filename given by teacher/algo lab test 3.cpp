#include<bits/stdc++.h>

using namespace std;

int c=0;

void merge(int a[], int startA, int endA, int endB)
{
    int sizeA=endA-startA+1;
    int sizeB=endB-endA;

    int arr[sizeA], arr2[sizeA];
    for(int i=0; i<sizeA; i++)
        arr[i]=a[startA+i];
    for(int i=0; i<sizeB; i++)
        arr2[i]=a[endA+i+1];

    int i,j,k;
    i=j=0;
    k=startA;

    while(i<sizeA && j<sizeB)
    {
        if(arr[i]<=arr2[j])
        {
            a[k]=arr[i];
            i++;
        }
        else
        {
            a[k]=arr2[j];
            j++;
            c+=endA-i+1;
        }
        k++;
    }

    while(i<sizeA)
    {
        a[k]=arr[i];
        i++;
        k++;
    }
    while(j<sizeB)
    {
        a[k]=arr2[j];
        j++;
        k++;
    }
}

void merge_Sort(int a[], int left, int right)
{
    if(left>=right)
        return;
    else
    {
        int mid=left+(right-left)/2;
        merge_Sort(a,left,mid);
        merge_Sort(a, mid+1, right);
        merge(a, left, mid, right);
    }
}


int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    merge_Sort(a,0,n-1);

    cout<<"\nUnsorted pairs: "<<c;

    return 0;
}












