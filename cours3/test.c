#include <stdio.h>

struct circle {
	int x ;
	int y ; 
	unsigned int radius ; 
};

void elargir (struct circle* p, unsigned int dr){
	p->radius = p->radius + dr;
}


int main () {
	struct circle c = {100, 50, 7};
	elargir(&c, 4);	
	printf("Un cercle à (%d,%d) avec radius %d.\n", c.x, c.y, c.radius);
	return 0;
}
