#include <stdio.h>
#include <math.h>

/* 课后习题2.2 */

int main(int argc, char **argv)
{
	double p1, p2, p3, p4, p5;
    double m=1000, r1=0.0414, r2=0.0468, r3=0.054, r5=0.0585,rr=0.0072;
    p1=m*(1+5*r5);
    p2=m*(1+2*r2)*(1+3*r3);
    p3=m*(1+3*r3)*(1+2*r2);
    p4=m*pow((1+r1),5);
    p5=m*pow((1+rr/4),20);
    printf("p1=%10.2f\n p2=%10.2f\n p3=%10.2f\n p4=%10.2f\n p5=%10.2f\n",p1,p2,p3,p4,p5);
	return 0;
}
