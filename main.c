#include <stdio.h>

/*-----------------
Cipher algorithms (currently only rotation encoding)

User instructions: read & use the terminal using the below commands:
cd /projects/ENGG1500.1 
ls
./a.out
------------------*/

int main() {
    char Imessage[1024];                  //initialise an array of length 1024, used to remember our string
    char Omessage[1024];                  //
    //FILE *input = fopen("input.txt", "r");
    //FILE *output = fopen("output.txt", "w");
    int n = 1, key = 0;
    printf("What is your message? ");
    scanf("%s\n", Imessage);
   //fscanf(input, "%c", Imessage);
//   printf("What is your message?\n");   //ask user what they would like to encode
   /*if (key = 0) {
       Omessage == Imessage;
   }*/
   
   printf("You gave: %s\n", Imessage);
   
   //fprintf(Omessage, Omessage, output);
   return 0;
}
