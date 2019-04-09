#include <stdio.h>

/*--------
Cipher algorithms (currently only rotation encoding)
--------*/

int main() {
   //char message[100];                    //initialise an array of length 10, used to remember our string
   int x;
   
   printf("What is your message?\n");   //ask user what they would like to encode
   scanf("%d", &x);                //
   printf("%d", x);
   return 0;
}
