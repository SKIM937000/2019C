#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,delta,x1,x2,m,n,i,j;
	scanf("%lf%lf%lf",&a,&b,&c);

	if (fabs(a) <= 1e-6){
		if (fabs(b) <= 1e-6)
			puts("Not an equation");
		else
			printf("%.2lf",-c/b);
	}
	else{
		delta=b*b - 4*a*c;
		m = -b / (2*a);
		n = sqrt(fabs(delta)) / (2*fabs(a));
		i = m + n;
		j = m - n;

		if (delta < 0)
			printf("%.2lf+%.2lfi %.2lf-%.2lfi",m,n,m,n);
		else {
 		       if (i == j)
 			    printf("%.2lf %.2lf",i,i);
  		       else {
 		               x1 = (i > j) ? i : j;
 			       x2 = (i > j) ? j : i;
 			       printf("%.2lf %.2lf", x1, x2);
  			    }
 	    }
			return 0;
}
} 