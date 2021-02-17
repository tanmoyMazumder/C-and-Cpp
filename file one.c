#include<stdio.h>
int main()
{
    int bleh;
    FILE *fp;
    fp=fopen("potato.txt","w");
    scanf("%d",&bleh);
    fprintf(fp,"%d",bleh);
    fclose(fp);
    fp=fopen("potato.txt","r");
    fscanf(fp,"%d",&bleh);
    printf("%d",bleh+1);
}
