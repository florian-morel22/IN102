/* Florian MOREL */

#include <stdio.h>
#include <stdlib.h>

struct intervalle {
	int a;
	int b;
};


void affichage (struct intervalle inter) {
	printf("[%d,%d]\n", inter.a, inter.b);
}

struct intervalle saisie_intervalle () {
	int a;
	int b;
	printf("borne inf : ");
	scanf("%d", &a);
	printf("borne supp : ");
	scanf("%d", &b);
	struct intervalle saisie = {a,b};
	
	return saisie;
}


struct intervalle intersection (struct intervalle inter1, struct intervalle inter2) {
	
	int a_intersection;
	int b_intersection;
		
	if (inter1.a > inter2.a){
		a_intersection = inter1.a; 
	}
	else{
		a_intersection = inter2.a;
	}

	if (inter1.b > inter2.b){
		b_intersection = inter2.b; 
	}
	else{
		b_intersection = inter1.b;
	}
	
	struct intervalle intersection = {a_intersection, b_intersection};
	
	return intersection;
}


struct intervalle* saisie_tableau (int N){
	
	struct intervalle* Tableau = malloc(sizeof(struct intervalle)*N);
	
	for (int k=0; k<N; ++k){
		Tableau[k] = saisie_intervalle();
	}
	
	return Tableau;
}


struct intervalle intersection_tableau(struct intervalle* Tab, int N){
	
	struct intervalle inters_totale = intersection(Tab[0], Tab[1]);
	
	for (int i = 2; i<N; ++i){
		inters_totale = intersection(inters_totale, Tab[i]);
	}
	return inters_totale;
}

void affichage_tableau_inverse (struct intervalle* Tab, int N) {
	for (int k = 0; k<N; ++k){
		affichage(Tab[N-k-1]);
	}
	
}


int main () {

	int N = 3;
	
	struct intervalle* Tab = saisie_tableau(N);
	
	struct intervalle inters_totale = intersection_tableau(Tab, N);
	
	affichage(inters_totale);
	affichage_tableau_inverse (Tab, N);
	
	free(Tab);
	
	return 0;
}






/*  Le main sur lequel j'ai travaillé durant le TD


int main () {

	int N = 3;
	
	struct intervalle inter1 = {-1, 9};
	struct intervalle inter2 = {-3, 5};
	struct intervalle inter3 = saisie_intervalle();
	struct intervalle inter4 = intersection(inter1, inter2);	
	
	struct intervalle* Tab = saisie_tableau(N);
	
	struct intervalle inters_totale = intersection_tableau(Tab, N);
	
			
	affichage(inter1);
	affichage(inter2);
	affichage(inter3);
	affichage(inter4);
	
	affichage(Tab[0]);
	affichage(Tab[1]);
	affichage(Tab[2]);
	affichage(inters_totale);
	
	printf("=====================");
	affichage_tableau_inverse (Tab, N);
	
	free(Tab);
	
	return 0;
} */
