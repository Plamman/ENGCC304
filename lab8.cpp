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

int a[5] ;
int p ;
int s = 0 ;
while ( s < 5 ) {
printf ("=") ;
scanf ("%d" , &p ) ;

 a[s] = p ;
 s++ ;

}
for ( int i = 0 ; i < s ; i++ ) {
printf ( "%d" , a [ i ] ) ;
}

    return 0 ;
}//end main function
