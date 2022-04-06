#include <stdio.h>

int foo(int a){
	int retVal = 0;
	int b = 1;
	while( a - b >= 0){
		retVal = b;
		b = b * 10;
	}
	return retVal;
}

int main()
{
	int y = foo(201100);
	printf("%d", y);
}
