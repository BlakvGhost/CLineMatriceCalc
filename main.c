#include <stdio.h>
#include <stdlib.h>

void main()
{
   int m[4][5], tab[4], s;

    for(int i = 0; i < 4; i++) {
      for(int y = 0; y < 5; y++) {
        printf("Entrer la valeur pour le tableau: ");
        scanf("%d",&m[i][y]);
       }
   }

   for(int i = 0; i < 4; i++) {
    s = 0;
    for(int y = 0; y < 5; y++) {
        s = s + m[i][y];
    }
    tab[i] = s;
   }

    for(int i = 0; i < 4; i++) {
        printf("La somme de la ligne %d est : %d \n", i + 1, tab[i]);
    }

}
