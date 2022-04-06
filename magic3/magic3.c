#include <stdio.h>

int foo(){
	int retVal = 0;
	int a = 0;
	int b = 1;
	int t = 0;
	
	for(int i = 0; i < 4; i++ ){
		t = a;
		a = b;
		b = b + a;
		retVal = retVal + b;
	}
	return retVal;
}

int main()
{
	printf("%d", foo());
	
}
