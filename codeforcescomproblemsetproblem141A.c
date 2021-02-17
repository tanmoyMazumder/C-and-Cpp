#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,ref[26]={0},comp[26]={0};
    char bal[101],sal[101],mal[202];
    gets(bal);
    gets(sal);
    gets(mal);
    for(i=0;i<strlen(bal);i++)ref[bal[i]-65]++;
    for(i=0;i<strlen(sal);i++)ref[sal[i]-65]++;
    for(i=0;i<strlen(mal);i++)comp[mal[i]-65]++;
    for(i=0;i<26;i++)if(ref[i]==comp[i])j++;
    if(j==26)printf("YES\n");
    else printf("NO\n");
}
