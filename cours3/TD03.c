/* Florian MOREL */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


struct guerrier {
	char* nom;
	double pv;
	int pa;
	double tg;
};



void afficher_guerrier (struct guerrier g) {
	printf("nom : %s, pv : %f\n", g.nom, g.pv);
}

void attaque (struct guerrier* pjoueur, struct guerrier* padversaire) {
	padversaire->pv = padversaire->pv - pjoueur->pa;
	//printf("vie %s : %f\n",padversaire->nom, padversaire->pv);
}

void bouclier (struct guerrier* pjoueur) {
	pjoueur->pv = pjoueur->pv + pjoueur->tg * (100 - pjoueur->pv);
	//printf("vie %s : %f\n",pjoueur->nom, pjoueur->pv);
}

void swap (struct guerrier** ppjoueur,struct guerrier** ppadversaire) {
	struct guerrier temp = **ppjoueur;
	**ppjoueur = **ppadversaire;
	**ppadversaire = temp;
}

int rand_int (int p) {
	return rand()%(2*p+1) - p;
	
}


int main () {
	
	srand(time(0));
	
	struct guerrier Aragorn = {"Aragorn", 100, 20, 0.6};
	struct guerrier Boromir = {"Boromir", 100, 30, 0.4};
	
	struct guerrier* pjoueur = &Aragorn;
	struct guerrier* padversaire = &Boromir;
	
	struct guerrier* pgagnant;
	
	int i = 0;
	int game = 1;
		
	while (game != 0){
		
		//printf("%s\n", pjoueur->nom);
				 
		afficher_guerrier(*pjoueur);
		afficher_guerrier(*padversaire);
		
		char touche;
		scanf(" %c", &touche);
		
		if (touche == 'a' || touche == 'b'){
			if (touche == 'a') {
				attaque(pjoueur, padversaire);
			}
			if (touche == 'b') {
				bouclier(pjoueur);
			}
			
			if (padversaire->pv <= 0) {
				pgagnant = pjoueur;
				game = 0;	
			}
			padversaire->pv = padversaire->pv + rand_int(5);
			swap(&pjoueur, &padversaire);
			i  = i+1;
		}
		else {printf("APPUIE SUR A OU B !\n");}
	}
	
	
	printf("Le gagnant est %s !\nIl aura quand même fallu %d tours.\n", pgagnant->nom, i);
	
	return 0;
}




// Q9 : Aragorn joue en premier, il aura toujours un coup d'avance et en jouant correctement gagner à chaque partie 























