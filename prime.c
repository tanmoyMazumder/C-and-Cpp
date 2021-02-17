#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    for (i=2; i<n; i++)
    {
        if(n%i=0)
        {
            k++;
        }
    }
    if (k==0)
    {
        printf("tis prime");
    }
    else
    {
        printf("no shamima, this number aint prime");
    }
}
