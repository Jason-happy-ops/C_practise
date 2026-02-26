#include <stdio.h>
#include <math.h>
int main()
{
    //变量声明
    double a,b,c,disc,x1,x2,p,q;
    scanf("%lf %lf %lf",&a,&b,&c);  //双精度必须是用lf而非f
    disc = b*b - 4*a*c;

    if (disc < 0) {
    x2 = (-b-disc)/(2*a);

    printf("x1 = %lf\n",x1);
    printf("x2 = %lf\n",x2);

}