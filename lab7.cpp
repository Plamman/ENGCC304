/*
    จงเขียนโปรแกรมทายตัวเลขซึ่งทำงานดังนี้
    - ตอนเริ่มเกมผู้เล่นจะมีคะแนนเต็ม 100
    - โปรแกรมจะสุ่มตัวเลขที่มีค่าตั้งแต่ 1 ถึง 100
    - ให้ผู้เล่นทายว่าตัวเลขที่โปรแกรมสุ่มมามีค่าเป็นเท่าใด
        - หากทายผิด โปรแกรมจะลบคะแนนของผู้เล่นไป 10 หน่วย พร้อมแจ้งคะแนนปัจจุบันให้ผู้เล่นทราบด้วย
        - หากทายผิด โปรแกรมจะต้องบอกใบ้ว่าคำตอบที่ถูกมีค่า "มากกว่า" หรือ "น้อยกว่า" ตัวเลขที่ผู้ใช้ทาย
        - หากทายผิด ให้โปรแกรมรอรับตัวเลขถัดไปได้เลย
        - หากทายถูก ให้โปรแกรมแสดงความยินดีกับผู้ใช้ พร้อมแจ้งคะแนนปัจจุบันให้กับผู้เช่น
        - เมื่อเล่นเสร็จโปรแกรมรอรับคำสั่งจากผู้ใช้ หากผู้ใช้กรอกเลข 1 จะเข้าสู่โหมดการเล่นเกมใหม่อีกครั้ง หากกด -1 ให้หยุดการทำงานของโปรแกรม

    หมายเหตุ : การสุ่มตัวเลขจะใช้คำสั่ง rand() ที่อยู่ใน stdlib.h หากต้องการสุ่มตัวเลข 0 ถึง 100 ต้องใช้คำสั่งดังนี้
        rand() % 100 + 1
    หมายเหตุ : หากต้องการสุ่มตัวเลขที่เปลี่ยนแปลงตามเวลา ต้องใช้คำสั่ง srand( time( NULL ) ) ในตอนต้นของโปรแกรมด้วย

    Test case & Output:
        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) :
            20
        Sorry, the winning number is HIGHER than 20. (Score=90)
        Guess the winning number (21-100) :
            50
        Sorry, the winning number is LOWER than 50. (Score=80)
        Guess the winning number (21-49) :
            42
        That is correct! The winning number is 42.
        Score this game: 80

        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) : 
            75
        Sorry, the winning number is LOWER than 75. (Score=90)
        Guess the winning number (1-74) : 
            20
        Sorry, the winning number is LOWER than 20. (Score=80)
        Guess the winning number (1-19) : 
            2
        Sorry, the winning number is HIGHER than 2. (Score=70)
        Guess the winning number (3-19) : 
            15
        That is correct! The winning number is 15.
        Score this game: 70

        Do you want to play game (1=play,-1=exit) :
            -1
*/

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
