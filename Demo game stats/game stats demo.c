#include<stdio.h>
struct info{
    char name[20];
    int hp, attack;
}a;
int main()
{
    printf("name hp attack\n");
    gets(a.name);
    scanf("%d %d",&a.hp,&a.attack);
    FILE *fp;
    fp=fopen("stats.bin","wb");





}
