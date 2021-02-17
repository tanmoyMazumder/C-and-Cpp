#include<stdio.h>
#include<math.h>
int main()
{
    int tipp,taxp,ult2;
    double base,tip,tax,ult;
    scanf("%lf%d%d",&base,&tipp,&taxp);
    tip=base*(tipp/100.0);
    tax=base*(taxp/100.0);
    ult=base+tip+tax;
    ult2=(int)ult;
    if((ult-ult2)<.5)printf("%d",ult2);
    else printf("%d",ult2+1);


}
