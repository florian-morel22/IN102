/* Florian MOREL */

#include <stdio.h>

int main () {

	float x = 0.0; // degF
	float y = (5.0/9.0)*(x-32.0); // degC
	printf("%d F = %d C\n", x, y);
	return 0;

}




/* Qu 1 :  Utiliser des float
   
   Qu 2 :  32.00 F = 0.00 C
   
   Qu 4 :  0.00 F = -17.78 C
   
   Qu 5 :  80.00 F = 26.67 C
   
   Qu 6 :  100.00 F = 37.78 C
   
   Qu 7 :  0 F = -17.7778 C
   
   Qu 8 :  0 F = -17.8 C
   
   Qu 9 :  erreur car on ne peut pas substituer %d par un non entier (x ou y)
   
   
   
   
   
*/
