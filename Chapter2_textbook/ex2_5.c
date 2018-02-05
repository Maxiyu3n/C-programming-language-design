#include <stdio.h>

int main(int argc, char **argv)
{
	char c1=97, c2=98;          /* 将'a' 和‘b'的ASCII码分别赋给字符变量c1, c2*/
    printf("%c,%c\n",c1,c2);    /* 字符数据按字符形式输出 get a,b*/
    printf("%d,%d\n",c1,c2);    /* 字符数据按照整数形式输出 get 97, 98 */
	return 0;
}
