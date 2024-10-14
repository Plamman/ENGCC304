#include <stdio.h>
#include <string.h>

int main() {
 char word[ 100 ] ;
 char word1[ 100 ] ;

 printf ( "Enter word :" ) ;
 scanf (" %s " , word ) ;

 int Counting = strlen( word ) ; //นับข้อความที่ใส่ไป plam

for ( int i = 0 ; i < Counting ; i++ ) {
    word1[i] = word[ Counting - i - 1 ] ; //เปลี่ยนตำแหน่ง
}
word1[ Counting ] = '\0' ; //บอกจุดสิ้นสุดใน[]

printf(" %s : %s \n", word , word1 ) ;
if ( strcmp(word , word1) == 0) { //ตรวจว่า2ตัวที่ใส่ไปเหมือนกันหรือป่าวเหมือนจะเป็น0ไม่เหมือนเป็น1
        printf("Pass.\n") ;
    } else {
        printf("Not Pass.\n") ;
    }
    return 0 ;
}//end main function
