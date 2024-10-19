#include <stdio.h>
#include <stdlib.h>  //เรียก Libary ของ Random
#include <time.h>//เรียก Libary ของ time

int main() {
    srand( time(NULL) ) ;
    int num = 0 , score = 100 ;
    int front = 0 , back = 100 ;

    printf ( "Do you want to play game (1=play, -1=exit) : (Score=%d)\n" , score ) ;
    scanf( "%d" , &num ) ;


    while ( 1 ) { //ใช้กำหนดว่าจะเล่นอีกรอบ
        score = 100 , front = 1 , back = 100 ; // รีเซ็ตค่า
        int Random = 42 ;
        if ( num == 1 ) { //กำหนดเริ่มเกม
            while ( 1 ) {
                printf( "Guess the winning number (%d-%d): " , front , back ) ;
                scanf( "%d" , &num ) ;
                    if ( num < front || num > back ) { 
                        printf( "Your guess is out of the current bounds (%d-%d)! Try again.\n" , front , back ) ;
                        if ( score < 0 ) score = 0 ;
                    } else if ( num < Random ) {
                        front = num + 1 ;
                        score -= 10 ;
                        if ( score < 0 ) score = 0 ;
                        printf( "Sorry, the winning number is HIGHER than %d." , num ) ;
                        printf( " (Score=%d)\n" , score ) ;
                    } else if ( num > Random ) {
                        back = num - 1 ;
                        score -= 10;
                        if ( score < 0 ) score = 0 ;
                        printf( "Sorry, the winning number is LOWER than %d.", num ) ;
                        printf( " (Score=%d)\n" , score ) ;
                    } else if ( num == Random ) {
                        printf( "That is correct! The winning number is %d.\nScore this game: %d\n"  , Random , score) ;
                        break ;
                    }//end if
        }//end while 
        printf ( "Do you want to play game (1=play, -1=exit) :\n" ) ;
        scanf( "%d" , &num ) ; 
        }else { //ใช้กำหนดว่าจะไม่เล่น
            exit (0) ;
        }//end if
    }//end while เริ่มใหม่
    return 0 ;
}//end main function
