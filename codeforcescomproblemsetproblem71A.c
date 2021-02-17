#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,t,l;
    char s[100];
    scanf("%d",&t);
    while(i<=t)
    {
        gets(s);
        l=strlen(s);
        if(l<11) printf("%s",s);
        else{printf("%c",s[0]);printf("%d",l-2);printf("%c",s[l-1]);}
        printf("\n");
        i++;
    }
}
