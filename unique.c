#include<stdio.h>
int main ()
{
    int m=0,n,i,j;
    scanf("%d",&n);
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        int k=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    k++;
                }
            }
        }
        if (k==0)
        {
            b[m]=a[i];
                m++;
        }
    }

    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
        if (count==0)
        {
            b[m]=a[i];
            m++;
        }
    }

    for(i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }

}
