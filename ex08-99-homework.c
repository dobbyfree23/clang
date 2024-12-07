/*
파일명: ex08-99-homework.c
1번 분석하기 
*
**
***
****
*****
******
*******

2번
   *
  **
 ***
****

3번
   *
  ***
 *****
*******

4번            i
   *           0
  ***          1
 *****         2 
*******        3
 *****         4
  ***          5
   *           6
    
               i        j
   *           0       j < 3   " "       
  ***          1       j < 2             
 *****         2       j < 1             
*******        3       j < 0             
 ******        4        
  *****        5        
   ****        6        
     
*/

#include <stdio.h>

int main(void)
{

   for(int i = 0; i < 7; i++) {

      for(int j = 0; j < 7; j++) {

         if(i < 4) {

            if(j < 3 - i) {
               printf(" ");
            } else if(j > 3 + i) {
               printf(" ");
            } else {
               printf("*");
            }
           
         } else {

            if(j < i - 3) {
               printf(" ");
            } else if (j > 9 - i) {
               printf(" ");
            } else {
               printf("*");
            }

         }

      }

      printf("\n");

   }

   printf("\n");


   printf("   ☆\n");
   for(int i = 0; i < 4; i++) {

      for(int j = 0; j < 7; j++) {

         if(j < 3 - i) {
            printf(" ");
         } else if(j > 3 + i) {
            printf(" ");
         } else {
            printf("*");
         }

      }

      printf("\n");

   }
   printf("  | | Merry Christmas~*");



   return 0;
}
