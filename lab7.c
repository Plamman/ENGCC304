#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random , s , player  ;
    int low = 1 ;
    int high = 100 ;
    int score = 100 ;

do{
     printf ( "Do you want to play game (1=play,-1=exit) =" ) ; //คำสั้งเริ่มเกมแล้วรับค่า player
     scanf ( "%d" , & player ) ;
    
       if ( player == 1 ) {
          srand ( time ( NULL ) ) ; // การรวน แล้วเก็บค่า random 
          random = rand () % 101 ;
          printf ( "%d\n" , random ) ; // ใช้ตรวจสอบ

          printf ( "\nplay\n" ) ; 
          printf ( "\nscore=%d\n" , score ) ; //แสดงข้อมูล score
        
        
        
         while ( 1 ) {
          printf ( "Guess the winning number (%d-%d)  =",low,high ) ;     
          scanf( "%d", & s ) ; //รับค่าจากผู้เล่น ค่าคือ s
          
            
         if ( random > s ) { //ถ้าค่าของ random การสุ่ม มากกว่า ค่าของ sค่าของข้อมูลการผู้เล่น
            printf ( "Sorry, the winning number is HIGHER than %d\n" , s ) ;
            score = score - 10 ;
            printf ( "Score= %d\n" , score ) ;
            
            if ( low < s - 1 ) {
                low = s + 1 ;
            }//end if
            
           
             
              
         } else if ( random < s ) {
            printf ( "Sorry, the winning number is LOWER than %d\n" , s ) ;
            score = score - 10 ;
            printf ( "Score= %d\n" , score ) ;
          
            if ( high > s + 1 ) {
                high = s - 1 ;
            }//end else if
            
         } else {
            printf ( "That is correct! The winning number is %d\n", s ) ;
            printf ( "Score this game: %d\n" , score ) ;
            break ; // ออกจากลูป while เมื่อทายถูก
         } 
          if ( score <= 0 ) {
             printf ( "The score is gone" ) ;
             break ; //ออกจากลูป while เมื่อคะแนนหมด
            }
       
        } // end while 
        
          
          if ( player == -1 ) {
            printf ( "exit" ) ;
            break ; // ออกจากลูป do-while เมื่อเลือกออก
          } // end if
                       

    } else if ( player == -1 ) {
        printf ( "exit" ) ;
    } else { //end else if
        printf ( "error" ) ;
    }//end else
} while ( player != -1 ) ;
  return 0 ;
}//end main function
