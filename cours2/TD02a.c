/* Florian MOREL */


/*  Qu 1 : 5 pixels sont coloriés en rouge

Qu 2 :(imin, jmin) = (5,10), (imax, jmax) = (9, 10)

Qu 3 : On voit 5 pixels rouges sur fond noir, plus ou moins au milieu de la fenêtre

Qu 4/5 : ---------------------------------------------------------------------------

#include <stdio.h>

#include "paint.c"


void ligne_horizontale(int j, int i_min, int i_max, int r, int g, int b, int largeur, int hauteur, unsigned char* pixels) {

  for (int i = i_min; i<=i_max; i=i+1){ 
  color_pixel(i,j,r,g,b,largeur,hauteur,pixels);
  }

}


int main ()
{
  int largeur = 600;
  int hauteur = 400;

  // Creer les pixels pour dessiner
  unsigned char* pixels = create_pixels(largeur,hauteur);

  unsigned char r,g,b;

  // couleur rouge
  r = 255;
  g = 0;
  b = 0;
  
  
  int i_min = 100;
  int i_max = 500;
  int j = 50;
  
  ligne_horizontale(j, i_min, i_max, r, g, b, largeur, hauteur, pixels);
  
  // Ecrire vers un fichier BMP 
  save_BMP("ligne.bpm", largeur, hauteur, pixels);

  // Détruire le canvas pour libérer la mémoire 
  destroy_pixels(pixels);
  
  return (0) ;
}


Qu 6 : ------------------------------------------------------------------------


#include <stdio.h>

#include "paint.c"


void ligne_horizontale(int j, int i_min, int i_max, int r, int g, int b, int largeur, int hauteur, unsigned char* pixels) {

  for (int i = i_min; i<=i_max; i=i+1){ 
  color_pixel(i,j,r,g,b,largeur,hauteur,pixels);
  }

}


int main ()
{
  int largeur = 600;
  int hauteur = 400;

  // Creer les pixels pour dessiner
  unsigned char* pixels = create_pixels(largeur,hauteur);

  unsigned char r,g,b;

  // couleur rouge
  r = 255;
  g = 0;
  b = 0;
  
  int i_min = 100;
  int i_max = 250;
  
  for (int j = 50; j<= 500; j=j+1){
   
      ligne_horizontale(j, i_min, i_max, r, g, b, largeur, hauteur, pixels);
  }
  
  
  // Ecrire vers un fichier BMP 
  save_BMP("ligne.bpm", largeur, hauteur, pixels);

  // Détruire le canvas pour libérer la mémoire 
  destroy_pixels(pixels);
  
  return (0) ;
}

Qu 7 :

*/

#include <stdio.h>

#include "paint.c"


void ligne_horizontale(int j, int i_min, int i_max, int r, int g, int b, int largeur, int hauteur, unsigned char* pixels) {

  for (int i = i_min; i<=i_max; i=i+1){ 
  color_pixel(i,j,r,g,b,largeur,hauteur,pixels);
  }

}

void rectangle (int x_min, int y_min, int x_max, int y_max, int r, int g, int b, int largeur, int hauteur, unsigned char* pixels){

    
  for (int j = y_min; j<= y_max; j=j+1){
  	ligne_horizontale(j, x_min, x_max, r, g, b, largeur, hauteur, pixels);
  }
}



int main ()
{
  int largeur = 600;
  int hauteur = 400;

  // Creer les pixels pour dessiner
  unsigned char* pixels = create_pixels(largeur,hauteur);

  unsigned char r,g,b;

  // couleur rouge
  r = 255;
  g = 0;
  b = 0;
  
  int x_min = 50;
  int x_max = 500;

  int y_min = 100;
  int y_max = 250;
  
    
  rectangle (x_min, y_min, x_max, y_max, r, g, b, largeur, hauteur, pixels);
  
  
  // Ecrire vers un fichier BMP 
  save_BMP("ligne.bpm", largeur, hauteur, pixels);

  // Détruire le canvas pour libérer la mémoire 
  destroy_pixels(pixels);
  
  return (0) ;
}
















