#include <stdio.h>



int Separatenumbers(int number) {

    int sum = 0 ;
    int digit ;
    int originalNumber = number ;

    while (number > 0) {
        digit = number % 10 ;
        sum += digit * digit * digit ;
        number = number / 10 ;
    }


    if (sum == originalNumber) {
        printf ("Pass.") ;
    } else {
        printf ("Not Pass.") ;
    }

    return 0 ;
}

int main() {
    int number ;
    printf ("Enter Number: ") ;
    scanf ("%d", &number) ; 
    Separatenumbers (number) ;
    
    return 0 ;
}
