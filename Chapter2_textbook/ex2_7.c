#include <stdio.h>
#include <math.h>
#define PI 3.1415926


int main(int argc, char **argv)
{
    double r, c, s, v;
    r= 3.67;
    c=2*PI*r;
    s=PI*pow(r,2);
    v=4.0/3.0*PI*pow(r,3);
    printf("c=%f\n",c);
    printf("s=%f\n",s);
    printf("v=%f\n",v);
	return 0;
}
