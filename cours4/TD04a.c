/* Florian MOREL */

#include <stdio.h>
#include <string.h>



void affichage(char* ch){
	int i = 0;
	while (ch[i] != 0) {
		printf("%c", ch[i]);
		i = i+1;
		}
	printf("\n");
}

int compter_lettre(char* ch, char x){
	int i = 0;
	int nb_x = 0;
	while (ch[i] != 0) {
		if (ch[i] == x){
			nb_x = nb_x + 1;
		}
		i = i+1;
	}
	return nb_x;
}

int position_chaine(char* ch, char* m){
	//printf("%s------------------------\n", m);
	int i = 0;
	while(ch[i] != 0){
		int k = 0; 
		while (ch[k+i] == m[k]){
			
			if (m[k+1] == 0){
				return i;
			}
			else {
				k = k+1;
			}
		}
		i = i+1;		
	}
	return -1;
}

int main () {

	char* M = "suissesse";	
	affichage(M);
	printf("nb d'occurence = %d\n", compter_lettre(M, 'e'));
	printf("pos chaine : %d\n", position_chaine(M, "suissesses"));
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
