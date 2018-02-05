#include <stdio.h>

void main()
{
    int x, y, a, b;
    a = 40;
    b = 16;
    y = (a-2*b)/2;
    x = (4*b-a)/2;
    printf("兔子=%d,鸡=%d\n", x, y); /* %d 表示十进制的整数 */
}
