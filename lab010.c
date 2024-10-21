#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char text[ 100 ] , revest[ 100 ] ;

    printf( "Enter word:" ) ;
    scanf( "%s" , text ) ;

    int length = strlen( text ) ; 

    for (int i = 0 ; i < length ; i++ ) {
        revest[ i ] = text[ length - 1 - i ] ; 
        text[ i ]   = tolower( text[ i ] ) ;
        revest[ i ] = tolower( revest[ i ] ) ;
    }//end for revest
    revest[ length ] = '\0' ;

    if (strcmp( text , revest ) == 0 ) {
        printf( " Pass" ) ;
    } else 
        printf( " Not Pass" ) ;
    return 0 ;
}//end main function
