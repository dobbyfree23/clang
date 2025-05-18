/* 파일명: ex08-99-quiz.c
Q1>
   *
  **
 ***
****

Q2>
   *
  ***
 *****
*******

Q3>
            i      j
   *        0      
  ***       1      
 *****      2      
*******     3      
 *****      4      6       j > 9 - 4
  ***       5      5 6     j > 9 - 5
   *        6      4 5 6   j > 9 - 6   
    
    
*/


#include <stdio.h>


int main(void) 
{
   for(int i = 0; i < 7; i++) {
      for(int j = 0; j < 7; j++) {
         if(i < 4) {
            if(j < 3 - i) {
               printf(" ");
            } else if (j > 3 + i) {
               printf(" ");
            } else {
               printf("*");
            }
         } else {
            if(j < i - 3) {
               printf(" ");
            } else if(j > 9 - i) {
               printf(" ");
            } else {
               printf("*");
            }
         }
      }

      printf("\n");
   }

   return 0;
}

