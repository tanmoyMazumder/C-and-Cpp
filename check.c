#include<stdio.h>
int pasa(int n)
{
    if(n%10==0) printf("%d",n);
    else{
        pasa(n/10);
        printf("%d ",n%10);
    }
}
int main()
{
    int j=107;
    if(j=='k') printf("oui");
}
