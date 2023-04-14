#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* crypter(char* chaine,int cle){
	int longueur = strlen(chaine);
	char* tableau = malloc(sizeof(char)*longueur);// 1. réserver la mémoire pour la chaine cryptée
	for (int i = 0; i<longueur; i++){
		tableau[i] = chaine[i] + cle;
	}// 2. pour chaque lettre x dans chaine,
	// écrire x+cle dans la chaine cryptée
	return tableau;// 3. retourner le pointeur vers la chaine cryptée
}


int main() {
	/*char* orig = "ENSTA";
	char* cryp = crypter(orig,3);
	printf("%s\n",cryp);
	free(cryp); // libérer la mémoire!
	*/
	
	
	int nb = 'z';
	printf("%d\n", nb);
	printf("%c\n", nb);
	
	
	
}

