#include<stdio.h>
int main()
{
    int n,n2,c,l,k=1,j,i,m,x,y;
    m=x=y=0;
    scanf("%d",&n);
    int a[n][n];
    n2=n;

    for(l=0; l<n2; l++) //filling up with zero
    {
        for(j=0; j<n2; j++)
        {
            a[l][j]=0;
        }

    }



    if(n%2==0)
        c=n/2;
    else
        c=(n+1)/2;
    for(i=1; i<=c; i++)
    {
        x=m;
        for(y; y<n; y++) //y maxed to n-1
        {
            a[x][y]=k;
            k++;
            //printf("y=%d ",y);
        }
        y--;

        for(x; x<n; x++) //x maxed to n-1
        {
            a[x][y]=k;
            k++;
        }
        printf("value of y before minimizing starts: %d\n",y);
        x--;
        for(y; y>=0; y--) //y minimized to 0
        {
            a[x][y]=k;
            k++;
            printf("checking every reduction of y:%d, k:%d 0\n",y,k);
            for(l=0; l<n2; l++)
            {
                for(j=0; j<n2; j++)
                {
                    printf("%d ",a[l][j]);
                }
                printf("\n");
            }
        }
                printf("value of y after minimizing finishes: %d\n",y);

        y++;
                printf("value of y after y++: %d\n",y);

        printf("checking y minimized to 0\n");
        for(l=0; l<n2; l++)
        {
            for(j=0; j<n2; j++)
            {
                printf("%d ",a[l][j]);
            }
            printf("\n");
        }
        for(x; x>m; x--) //x minimized to m+1
        {
            a[x][y]=k;
            k++;
        }

        printf("checking x minimized to m+1\n");
        for(l=0; l<n2; l++)
        {
            for(j=0; j<n2; j++)
            {
                printf("%d ",a[l][j]);
            }
            printf("\n");
        }
        m++;
        n--;
        printf("begin checking iteration %d\n",i);
        for(l=0; l<n2; l++)
        {
            for(j=0; j<n2; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");

        }
        printf("finish checking iteration %d\n\n\n",i);


    }
    }

















