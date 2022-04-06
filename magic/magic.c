#include <stdio.h>

int foo(int a, int b){
	int count = 0;
	while( a >= 0 ){
		if( (a - b) >= 0 ){
			count++;
		}
		a = a - b;
	}
	return count;
}

int main()
{
    int x = 1000;
	int y = 0;
	int z = 0;
	y = foo(x, 2);
	z = foo(x, 5);
	printf("%d", y+z);
}
