/* Fig. 2.5: fig02_05.c
   Addition program */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* first number to be input by user  */
   int integer2; /* second number to be input by user */
   int sum;      /* variable in which sum will be stored */

   printf( "Enter first integer\n" ); /* prompt */
   scanf( "%d", &integer1 );          /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */

   sum = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", sum ); /* print sum */

   return 0; /* indicate that program ended successfully */

} /* end function main */



/**************************************************************************
 * (C) Copyright 1992-2007 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
บรรทัดที่1-2ไม่มีอะไรเกิดขึ้น
บรรทัดที่ 3 สั่งให้คอมไพเลอร์ค้นหาไฟล์ชื่อ stdio.h จากไดเรกทอรี Include
บรรทัดที่ 4 ไม่มีค่าแสดง
บรรทัดที่ 5 สั่งให้ซ่อน  function main begins program execution
บรรทัดที่ 6 ฟังก์ชั่นหลักเริ่มการทำงานของโปรแกรม
บรรทัดที่ 8 บันทึก/รับค่า integer1
บรรทัดที่ 9 บันทึก/รับค่า integer2
บรรทัดที่ 10 บันทึก/รับค่า sum
บรรทัดที่ 12 แสดงค่าเป็นข้อความว่า  Enter first integer และเว้นบรรทัด
บรรทัดที่ 13 อ่านค่าของ integer1
บรรทัดที่ 15 แสดงค่าเป็นข้อความว่า  Enter second integer และเว้นบรรทัด
บรรทัดที่ 16 อ่านค่าของ integer
บรรทัดที่ 18 หาค่าของ sum จากสมการ sum= integer1+integer2
บรรทัด 20 สั่งแสดงผลเป็นข้อความว่า Sum is และแสดงผลค่าของ sum
บรรทัดที่ 22  โปรแกรมรันสำเร็จโดยสมบูรณ์
บรรทัดที่ 24 จบฟังก์ชัน หลัก


