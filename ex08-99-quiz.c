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
 *****      4      0       j < i - 3
  ***       5      0 1     j < i - 3
   *        6      0 1 2   j < i - 3
    
    
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
            } else {
               printf("*");
            }
            
         }

      }

      printf("\n");
   }

   return 0;
}

