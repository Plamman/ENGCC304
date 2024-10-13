#include <stdio.h>
int main () {
float score ;
int a ;
printf ("Enter score:") ;
scanf ("%f", &score) ; 
a = score / 5 ;
switch (a) {
  case 20 :
  case 19 :
  case 18 :
  case 17 :
  case 16 :
    printf (" A !") ;
    break ;
  case 15 :
    printf (" B+ !") ;
    break ;
  case 14 :
    printf (" B !") ;
    break ;
  case 13 :
    printf (" c+ !") ;
    break ;
  case 12 :
    printf (" c !") ;
    break ;
  case 11 :
    printf (" D+ !") ;
    break ;
  case 10 :
    printf (" D !") ;
    break ;
 default :
    printf (" F !") ; 
    break ;
}//end switch
  return 0 ;
}//end function
