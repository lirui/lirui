#include <stdio.h>
#ifdef FOO
	#define 
#endif
 

int main(int argc, const char *argv[])
{
	int i;
	printf("请输入一个数：\n");
	scanf("%d",&i);
	printf("%d\n",i);
	return 0;
}
