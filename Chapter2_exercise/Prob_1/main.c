#include <stdio.h>
#include <math.h>

/*课后习题 2.1*/

int main(int argc, char **argv)
{
    double p, r=0.1;
    int n=10;
    p = pow((1+r),n);
    printf("P=%f\n",p);
	return 0;
}
