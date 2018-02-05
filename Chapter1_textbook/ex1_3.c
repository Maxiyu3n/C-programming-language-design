#include <stdio.h>

/* find the larger integer.   */

void main()
{
    int max(int x, int y);   /* 对被调用的max函数进行声明*/
    int a, b, c;
    scanf("%d,%d", &a, &b );
    c = max(a,b);
    printf("max= %d\n", c);
}

int max(int x, int y)
{
    int z;
    if (x>y) z = x;
    else z = y;
    return(z);   
}
