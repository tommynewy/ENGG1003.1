#include <stdio.h>

/*-----------------
Cipher algorithms (currently only rotation encoding)

User instructions: read & use the terminal using the below commands:
cd /projects/ENGG1500.1 ls
./a.out
------------------*/

int main() {
   char message[1024];                  //initialise an array of length 1024, used to remember our string
   FILE *input = fopen("input.txt", "r");
   fgets(message, 1024, input);
//   printf("What is your message?\n");   //ask user what they would like to encode
   printf("You gave: %s\n", message);
   return 0;
}
