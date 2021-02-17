#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    FILE *fp;
    char filename[]="contest.txt";
    char pasa[99999];

    fp=fopen(filename,"w");

    fgets(pasa,99999,fp);

    fclose(fp);




    return 0;
}

























