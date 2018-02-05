#include <stdio.h> /*用输入输出函数的必须用stdio.h头文件*/
#include <math.h>  /*用数学函数时必须用math.h头文件 */

void main()
{
    int d=324500,p=3245;
    double r=0.008,m;      /* 定义r,m为实型变量*/
    m = (log10(p)-log10(p-d*r))/log10(1+r);
    printf("total month = %f\n",m);    /*输出m的值*/
    printf("total money = %f\n", m*p);  /*输出总付款*/
}

