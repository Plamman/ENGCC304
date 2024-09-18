/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/

#include <stdio.h>

int main() {

int n = 0 ;
int arr[n] ;
int p ;
int s = 0 ;

printf ("enter numbur") ;
scanf ("%d" , &n ) ;

while ( s < n ) {
printf ("Enter value = ") ;
scanf ("%d" , &p ) ;

 arr[s] = p  ;
 s++ ;
}
for ( int i = 0 ; i < n ; i++ ) {
    printf ( " %d" , i   ) ;

  if ( ( arr [ i ] % 2 == 0 || arr [ i ] % 3 == 0 || arr [ i ] % 5 == 0 || arr [ i ] % 7 == 0 ) 
        && ( arr [ i ] != 2 && arr [ i ] != 3 && arr [ i ] !=5 && arr [ i ] != 7 ) ) {
      printf ( " #" ) ;

 }else {
      printf ( " %d" , arr [ i ] ) ;


 }
  
} 

    return 0 ;
}//end main function
