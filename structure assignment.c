#include<stdio.h>
typedef struct
{
    char Gender,Name[40];
    int Age,Annual_income ;

} movieStar;
int HighestEarning(int n,movieStar M[])
{

    int i,h=0;
    for(i=0; i<n; i++)
    {
        if(M[i].Annual_income>h)
        {

            h=M[i].Annual_income;
        }
    }
    return h;
}
main()
{
    int i,N;
    char h;
    printf("enter N: ");
    scanf("%d",&N);
    movieStar M[N];
    for(i=0; i<N; i++)
    {
        printf("Movie star #%d\n",i+1);
        printf("enter Name: \n"); getchar();
        gets(M[i].Name);
        printf("%s\n",M[i].Name);
        printf("enter Age:\n");
        scanf("%d",&M[i].Age);
        printf("enter gender: M or F\n");
        scanf("%c",&M[i].Gender);
        printf("enter annual income:\n");
        scanf("%d",&M[i].Annual_income);
    }
    printf("highest income: %d\n",HighestEarning(N,M));

}
