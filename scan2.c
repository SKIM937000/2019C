#define PI 3.141592657
#include <stdio.h>
#include <math.h>
main()
{
double a,b,m;
int midu=11340;
scanf("%lf%lf",&a,&b);
printf("%lf",m=PI*pow(a/2,3)*4/3*midu*0.000001-PI*pow(b/2,3)*4/3*midu*0.000001);
}
