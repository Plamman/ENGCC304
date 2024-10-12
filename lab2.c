#include <stdio.h>

int main() {
    char character ;
    int num1 , num2 ;
    float floatingPoint; 
    char string[ 100 ] ;

    printf ("Enter a character: ") ; 
    scanf (" %c", &character) ; 
    printf ("Enter two integers: ") ;
    scanf ("%d %d", &num1, &num2) ;
    printf ("Enter a floating-point number: ") ;
    scanf ("%f", &floatingPoint) ;
    printf ("Enter a string: ") ;
    scanf ("%s", string) ;

    printf ("You entered character: %c\n", character) ;
    printf ("You entered integers: %d and %d\n", num1, num2) ;
    printf ("You entered floating-point number: %.2f\n", floatingPoint) ; 
    printf ("You entered string: %s \n", string) ;

    return 0;
}
