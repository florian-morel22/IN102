/* Florian MOREL */

#include <stdio.h>


/* Qu 1 : ----------------------------------------------------------------

int main () {

	int n = 20;
	for (int i=1; i<=n; i=i+1){
		printf("*");
	}
	printf("\n");
	return 0;
}


Qu 2 : ----------------------------------------------------------------

int main () {

	int n = 20;
	for (int i=1; i<=n; i=i+1){
		if (i%2==0){
			printf("*");
		} else {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}

Qu 3 : ----------------------------------------------------------------

int main () {
	int n = 20;
	for (int i=1; i<=n; i=i+1){
		if (i%2==0 & i>=9){
			printf("*");
		} else {
			printf(" ");
		}
	}
	printf("\n"); 

	return 0;
}

Qu 4 : ----------------------------------------------------------------

int main () {
	int nb_lignes = 5;
	int n = 20;
	for (int k=1; k<=nb_lignes; k+=1) {
		for (int i=1; i<=n; i=i+1){
			if (i%2==0 & i>=9){
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	} 
	
	return 0;
}

Qu 5 : ----------------------------------------------------------------


int main () {
	int nb_lignes = 5;
	int n = 20;
	for (int k=1; k<=nb_lignes; k+=1) {
		for (int i=1; i<=n; i=i+1){
			if ((k%2==0 & i%2==0 & i>=9) | (k%2==1 & i%2==1 & i>=9)){
				printf("*");
			} 
			else{
				printf(" ");
			}
		}
		printf("\n");
	} 
	
	return 0;
}

Qu 6 : ----------------------------------------------------------------

*/

int main () {
	
	int m = 7;
	for (int k=1; k<=m; k+=1) {
		
		for (int i=1; i<=k; i=i+1){
			if (i==1) {
				printf("        *");
			} else {
				printf("*");
			}
		}
		printf("\n");
	} 
	
	return 0;
}











