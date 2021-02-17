#include<stdio.h>
#include<math.h>

int digits(int m)
{
    int c=0;
    while(m>0)
    {
        m=m/10;
        c++;
    }
    return c;
}

int main()
{
    int i,n,m,t,d;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int c=0,j=0,k;
        scanf("%d",&n);
        d=digits(n);
        int a[d];
        while(d>1)
        {
            k=n/pow(10,d-1);
            m=k*(pow(10,d-1));
            a[j]=m;
            n=n-m;
            j++;
            d=digits(n);
        }
        a[j]=n;
        int y=0;
        int b[j+1];
        for(c=0; c<=j; c++)
        {
            if(a[c]!=0)
            {
                b[c]=a[c];
                y++;
            }

        }
        printf("%d\n",y);
        for(c=0;c<y;c++)
        {
            printf("%d ",b[c]);
        }
        printf("\n");

    }
}
