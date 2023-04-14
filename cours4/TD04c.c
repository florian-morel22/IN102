/* Florian MOREL */

#include <stdio.h>
#include <stdlib.h>


/* Q1 ----------------------------------------------------
int main (int argc, char* argv[]){

	for (int i=1; i<argc; ++i){
		printf("%s\n", argv[i]);
	}	
	return 0;
}

Q2 -------------------------------------------------------

int main (int argc, char* argv[]){

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);	
	int z = atoi(argv[3]);
	
	printf("%d + %d + %d = %d\n", x, y, z, x+y+z);
	
	return 0;
}

Q3 -------------------------------------------------------

int main (int argc, char* argv[]){

	float x = atoi(argv[1]);
	float y = atoi(argv[2]);	
	float z = atoi(argv[3]);
	
	printf("%f x %f x %f= %f\n", x, y, z, x*y*z);
	
	return 0;
}
*/

void affichage(int* X, int n){
	printf("%d", X[0]);
	for (int k = 1; k<n; ++k){
		printf(",%d", X[k]);
	}
	printf("\n");
}

int trouver_max (int* X, int n) {

	int max = 0;
	for (int i = 0; i<n; ++i) {
		if (X[max] < X[i]){
			max = i;
		}
	}
	return X[max];
}

int main (int argc, char* argv[]){

	int n = argc - 1;
	int T[n];
	for (int i = 0; i<n; ++i){
		T[i] = atoi(argv[i+1]);
	}
	
	affichage(T, n);
	int element_max = trouver_max(T, n);
	printf("Le max est : %d\n", element_max);
	
	return 0;
}





















