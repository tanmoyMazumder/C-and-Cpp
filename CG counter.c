#include<stdio.h>
float sumcg( int n, float a[n][2])
{
    int i;
    float s=0;
    for(i=0;i<n;i++)
    {
        s=s+(a[i][0]*a[i][1]);
    }
    return s;
}
float sumc( int n, float a[n][2])
{
    int i;
    float s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i][0];
    }
    return s;
}
int main()
{
    int i,n;
    printf("Enter number of subjects: ");
    scanf("%d",&n);
    float a[n][2],total_credit,total_cg;
    for(i=0;i<n;i++)
    {
        printf("\nfor subject #%d: \n",i+1);
        printf("Enter credits: ");
        scanf("%f",&a[i][0]);
        printf("Enter cgpa: ");
        scanf("%f",&a[i][1]);
        printf("----------\n");
    }
    total_credit=sumc(n,a);
    total_cg=sumcg(n,a);
    printf("* * * * *\n");
    printf(" * * * *\n");
    printf("  * * *\n");
    printf("   * *\n");
    printf("    *\n");
    printf("Your total CGPA: %f\n    *\n    *",total_cg/total_credit);
    return 0;
}
