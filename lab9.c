#include <stdio.h>

int main() {
    int n = 0;
    
    printf ("Enter N :") ;
    scanf ( "%d" , &n ) ; //ตัวnเก็บค่าช่องว่างในarr[n]
    
    int arr[ n ] ;
    int p ;
    int s = 0 ;

    while ( s < n ) {
        printf (" Enter value[%d] :",s) ;
        scanf ( "%2d" , &p ) ; //เก็บค่าตัวเลขจากผู้ใส่
        arr[ s ] = p ;
        s++ ;
    }
        printf (" Index: ") ;

    for ( int i = 0 ; i < n ; i++ ) {
        printf ( "%3d" , i ) ; //แสดงค่าตัวเลขจากตัวแปล n
    }
    printf ( "\n" ) ;

    printf ( "Array: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( ( arr[ i ] % 2 == 0 || arr[ i ] % 3 == 0 || arr[ i ] % 5 == 0 || arr[ i ] % 7 == 0) &&
            (arr[ i ] != 2 && arr[ i ] != 3 && arr[ i ] != 5 && arr[ i ] != 7) ) {
            printf ( "  #" ) ;
        } else {
            printf ( " %2d" , arr[ i ] ) ;
        }
    }
    printf ( "\n" ) ;

    return 0;
}
