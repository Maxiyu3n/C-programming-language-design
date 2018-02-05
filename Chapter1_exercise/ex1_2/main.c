#include <stdio.h>

void main()
{
    int max(int x, int y, int z);
    int a, b, c, d;
    scanf("%d, %d, %d", &a, &b ,&c);
    d = max(a, b, c);
    printf("max = %d\n", d);
}

int max(int x, int y, int z)
{
    int w;
    if (x>y && x>z) w=x;
 /*   else if(y>x>z && y>z>x) w=y;*/
 /*   else if(z>y>x && z>x>y) w=z;*/
    else w=y;
    return(w);
}
