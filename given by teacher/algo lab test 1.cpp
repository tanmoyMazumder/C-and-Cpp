#include<bits/stdc++.h>

using namespace std;





void merge(int a[], int startA, int endA, int endB, int endC )
{
    int sizeA=endA-startA+1;
    int sizeB=endB-endA;
    int sizeC=endC-endB;

    int arr[sizeA], arr2[sizeA],arr3[sizeC];

    for(int i=0; i<sizeA; i++)
        arr[i]=a[startA+i];
    for(int i=0; i<sizeB; i++)
        arr2[i]=a[endA+i+1];
    for(int i=0; i<sizeC; i++)
        arr3[i]=a[endB+i+1];

    int i,j,k,l;
    i=j=k=0;
    l=startA;

    while(i<sizeA && j<sizeB && k<sizeC)
    {
        if(arr[i]<=arr2[j] && arr[i]<=arr3[k])
        {
            a[l]=arr[i];
            i++;
        }
        else if(arr[i]>=arr2[j] && arr2[i]<=arr3[k])
        {
            a[l]=arr2[j];
            j++;
        }
        else
        {
            a[l]=arr3[k];
            k++;
        }
        l++;
    }

    while(i<sizeA && j<sizeB)
    {
        if(arr[i]<=arr2[j])
        {
            a[l]=arr[i];
            i++;
        }
        else
        {
            a[l]=arr2[j];
            j++;
        }
        l++;
    }
    while(i<sizeA && k<sizeC)
    {
        if(arr[i]<=arr3[j])
        {
            a[l]=arr[i];
            i++;
        }
        else
        {
            a[l]=arr3[k];
            k++;
        }
        l++;
    }
    while(k<sizeC && j<sizeB)
    {
        if(arr3[k]<=arr2[j])
        {
            a[l]=arr3[k];
            a[l]=arr3[k];
            i++;
        }
        else
        {
            a[l]=arr2[j];
            j++;
        }
        l++;
    }
    ///----------------
    while(i<sizeA)
    {
        a[l]=arr[i];
        i++;
        l++;
    }
    while(j<sizeB)
    {
        a[l]=arr2[j];
        j++;
        l++;
    }
    while(k<sizeC)
    {
        a[l]=arr3[k];
        k++;
        l++;
    }
}

void merge_Sort(int a[], int left, int right)
{
            cout<<"\ncheck line 114";

    if(left>=right)
        return;
    else
    {
        int  breakPoint1, breakPoint2;
        breakPoint1=left-1+(right-left)/3;
        breakPoint2=left+((right-left)*2)/3;

        merge_Sort(a,left,breakPoint1);
        merge_Sort(a,breakPoint1+1,breakPoint2);
        merge_Sort(a,breakPoint2+1, right);

        merge(a,left , breakPoint1, breakPoint2, right);
    }
}


int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

        cout<<"\ncheck line 139";
    merge_Sort(a,0,n-1);

    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    return 0;
}












