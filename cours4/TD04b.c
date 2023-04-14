/* Florian MOREL */

#include <stdio.h>


void affichage(int* X, int n){
	printf("%d", X[0]);
	for (int k = 1; k<n; ++k){
		printf(",%d", X[k]);
	}
	printf("\n");
}

int compter_nombre(int* X, int n, int y){
	int cpt = 0; 
	for (int k = 0; k<n; ++k){
		if (y == X[k]){
			cpt = cpt + 1;
		}
	}
	return cpt;
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

int max_idx (int* X, int n, int* pind_max) {

	int max = 0;
	for (int i = 0; i<n; ++i) {
		if (X[max] < X[i]){
			max = i;
		}
	}
	*pind_max = max;
	
	return X[max];
}


void neg_max(int* X, int n, int ind_max) {

	X[ind_max] = -X[ind_max];	
}


int main () {

	int n = 20; 
	int T[n];
	
	T[0] = 3;
	for (int i = 1; i<n; ++i ){
		if (T[i-1]%2 == 0){
			T[i] = T[i-1]/2;
		}
		else {
			T[i] = 3*T[i-1] + 1;
		}
	}
	affichage(T, n);
	printf("compter nombre : %d\n", compter_nombre(T, 20, 6)); 
	printf("valeur max : %d\n", trouver_max(T, 20));
	
	int ind_max = 0;
	int val_max = max_idx(T, n, &ind_max);
	printf("valeur max : %d, indice : %d\n", val_max, ind_max );
	neg_max(T, n, ind_max);
	affichage(T, n);
	
	return 0;
}
