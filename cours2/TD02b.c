/* Florian MOREL*/

#include <stdio.h>
#include "paint.c"
#include <math.h>

/* Qu 1/2/... : ------------------------------------------------------------

*/



int compter_iterations(double x, double y, int max_iter){

  double a = 0;
  double b = 0;
  double c = 0;
  double k = 0;
  
  while (a*a + b*b <= 4.0 & k<max_iter){
  	c = a*b;
  	a = a*a - b*b + x;
  	b = 2*c + y;
  	k = k + 1;
  	
  }
  return k;

}

int main () {
  
  int width = 600;
  int height = 400; 
  double x_left = -2;
  double y_top = 1;
  double x_width = 3;
  double y_height = x_width*height/width;
  double dx = 0.1;
  double dy = 0.02;
  double g_ = -0.1;
  
  //Creer les pixels pour dessiner
  unsigned char* pixels = create_pixels(width,height);

  unsigned char r,g,b;
  
  for (int i=0; i<=width; i=i+1) {
    for (int j=0; j<=height; j=j+1) {
    	
      double x = x_left + (i*x_width)/width;	
      double y = y_top + (j*y_height)/height-y_height;
      double max_iter = 100;
      
      // Translations-Rotations
      x = x + dx;
      y = y + dy;      
      double xr = x*cos(g_)+y*sin(g_);
      y = -x*sin(g_)+y*cos(g_);
      x = xr;
      
      int nb_operations = compter_iterations(x,y,max_iter);
            
      if (nb_operations == max_iter) {
        r = 255*cos(i/(j+1));
        g = 255-sqrt(i);
        b = 255-log(1+r);
      } else {
      
      	r = 255*sin(nb_operations);
      	g = 100;
      	b = 255-r;
      }
      color_pixel(i, j, r, g, b, width, height, pixels);
    }
  }
  
  // Ecrire vers un fichier BMP 
  save_BMP("imageTD02.bpm", width, height, pixels);

  // Détruire le canvas pour libérer la mémoire 
  destroy_pixels(pixels);

  return 0;

}


/* Qu 3 : retourne 3

Qu 4 : retourne 100

Qu 5 : retourne 34

Qu 6 : x = x_left + (i*x_width)/width
       y = y_top + (j*y_height)/height - y_height

Qu 10 : ça ne marche pas car pour la nouvelle valeur de x on a besoin de l'ancienne de y qui vient d'être écrasée à l'instant.
*/



