#include <stdio.h>

int main() {

 int N ;  

printf ("Enter value:") ;
scanf ("%d", &N ) ;

if ( N % 2 != 0) {
  printf ("Series: ") ;

   for ( int i = 1 ; i <= N ; i++ ) {
     if ( i % 2 != 0 ) {
     printf ("%d ", i ) ;

     }

   }

 } else {
    printf ("Series: ") ;

    for ( int i = N ; i >= 0 ; i-- ) {
      if ( i % 2 == 0 ) {
      printf ("%d ", i ) ;

     }

   }

 }

    return 0;
}
