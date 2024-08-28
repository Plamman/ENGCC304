#include <stdio.h>
int main () {

int numbur,r,c ;
    printf ("enter numbur") ;
    scanf ("%d", &numbur) ;

    if ( numbur % 2 == 0) {
      for (int r = 0 ; r < numbur ; r++ ) {
        for (int c= 0 ; c < numbur ; c++) {
         if ( c == numbur - r - 1 ) {
          printf("1") ;
          
        }else {
          printf("0") ;
          

        }
       }
       printf("\n") ;
      }
    }else{
        for (int r = 0 ; r < numbur ; r++ ) {
            for (int c= 0 ; c < numbur ; c++) {
                if ( c == numbur-numbur+r) {
                    printf("1") ;
                }else{
                    printf("0") ;
                }
            }
            printf("\n");
        }
        
    }

 

 

  return 0 ;
}
