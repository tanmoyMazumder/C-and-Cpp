#include<stdio.h>
int round(float num)
{
    int n;
    n=(int)num;
    if (num-n==0) return n;
    else return n+1;
}
int perfectdivide(int a, int b)
{
    int c;
    float d;
    d=(float)a/b;
    return round(d);
}
int main()
{
     int R,r,sg,N,C,T,t2=0,t3,i,time[2001]={0};

     scanf("%d%*[\n]",&T);
     scanf("%d %d %d %d",&R,&r,&N,&C);
     int s[N],g[N],t[C];

     for(i=0;i<N;i++)
     {
         scanf("%d %d",&s[i],&g[i]);
     }
     for(i=0;i<C;i++)
     {
         scanf("%d",&t[i]);
     }

     for(i=1;i<=N;i++)
     {
         t2=t2+perfectdivide(g[i],R);

     }






}

