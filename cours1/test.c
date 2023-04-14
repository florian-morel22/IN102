#include <stdio.h>

int main() {
	int reponse;
	printf("Entrez 4 pour quitter: ");
	scanf("%d",&reponse);
	
	while (reponse!=4) {
		scanf("%d",&reponse);
	}
		
	return 0;
}
