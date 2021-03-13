#include<bits/stdc++.h>

using namespace std;

int coinChange( int arr[], int amount , int n )
{
	int i, j, x, y;
	int c[n + 1][amount];

	for (i = 0; i < amount ; i++)
		c[0][i] = 1;


	for (i = 1; i < n + 1; i++)
	{
		for (j = 0; j < amount; j++)
		{
		    if(i-arr[j] >= 0)
                x = c[i - arr[j]][j] ;
			else
                x=0;

			if (j >= 1)
                y =c[i][j - 1] ;
            else
                y=0;

			c[i][j] = x + y;
		}
	}


	return c[n][amount-1 ];
}

// Driver Code
int main()
{
    int amount,n ;
	int arr[] = {1,5,6,9};
	 amount = sizeof(arr)/sizeof(arr[0]);
	 n = 10;
	cout << coinChange(arr, amount, n);
	return 0;
}

