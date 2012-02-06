#include <stdio.h>
#ifdef FOO
	#define 
#endif
int main(int argc, const char *argv[])
{
	int a=1;
	int b=2;
	int c=a+b;
	printf("%d\n",c);
	return 0;
}
