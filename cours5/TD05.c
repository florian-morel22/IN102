/* Florian MOREL */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/*
  . = 0
  x = 1
  o = 2
*/


int* creer_grille () {
	int* grille = malloc(sizeof(int)*9);
	for (int i = 0; i < 9; ++i) {
		grille[i] = 0;
	}
	return grille;
}

void afficher (int* grille) {
	for (int i = 0; i<9; ++i){
		
		if (grille[i] == 0){
			printf(".");
		}
		if (grille[i] == 1){
			printf("x");
		}
		if (grille[i] == 2){
			printf("o");
		}
		
		if ((i+1)%3 == 0){
			printf("\n");
		}
	}
}



void test_affichage () {
	int* grille = creer_grille ();
	afficher(grille);
	grille[3] = 2;
	grille[7] = 1;
	afficher(grille);
	free(grille);
}

void placer (int* grille, int chiffre, int joueur){
	
	grille[chiffre - 1] = joueur;
}

void placer_alea (int* grille, int joueur) {
	
	int case_ = rand()%9 + 1;
	while (grille[case_-1] != 0){ //On cherche une case libre
		case_ = rand()%9 + 1;
	} 
	placer (grille, case_, joueur);
		
}

int a_gagne (int* grille, int joueur){

	for(int i = 0; i<3; ++i){
		if(grille[i] == joueur && grille[i+3]==joueur && grille[i+6]==joueur){
				return 1;
		}
		if(grille[i*3]==joueur && grille[i*3+1]==joueur && grille[i*3+2]==joueur){
				return 1;
		}
	}
	if(grille[0]==joueur && grille[4]==joueur && grille[8]==joueur ){
		return 1;
	}
	
	if(grille[2]==joueur && grille[4]==joueur && grille[6]==joueur ){
		return 1;
	}
		
	return 0;
}


int main (){
	
	
	srand(time(0));
	
	int* grille = creer_grille ();
		
	int chiffre;
	int jeu = 1;
	int n = 1; //On commence directement le 1er tour
	
	
	while (jeu == 1){
		printf("==========================\n"); //séparation graphique entre 2 parties
		scanf("%d", &chiffre);
		
		placer(grille, chiffre, 1);
		if ( a_gagne (grille, 1) == 1){
			jeu = 0;
		}
				
		int k = 0;
		while (jeu == 1 && grille[k] != 0){
			if (k == 8){
				jeu = 0;
				printf("Match nul en %d tours :\n", n);
			}
			k = k+1;
		}
		
				
		if (jeu == 1){	
			placer_alea(grille, 2);
			if ( a_gagne (grille, 2) == 1){
				jeu = 0;
			}
		}
		
		
		
		afficher(grille);
		n = n+1;	
	}
	
	free(grille);
	return 0;
}













