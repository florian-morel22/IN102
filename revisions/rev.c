#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {


	int x = 5;
	int y = 4;
	int* p = &x;
	int* q = &y;
	
	p = q;
	*p = 2;
	
	printf("%d,   %d\n", x, y);
	return 0;

}

