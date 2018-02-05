#include <stdio.h>

int main(int argc, char **argv)
{
    char c1=97, c2=98;      /* input a,b */
    c1=c1-32;               /* 将c1的ASCII 代码减32 */
    c2=c2-32;               /* 将c2的ASCII 代码减32 */
    printf("%c,%c\n",c1,c2);
    printf("%d,%d\n",c1,c2);
	return 0;
}
