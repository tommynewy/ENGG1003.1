#include <stdio.h>

/*-----------------
Cipher algorithms (currently only rotation encoding)

User instructions: read & use the terminal using the below commands:
cd /projects/ENGG1500.1 
ls
./a.out
------------------*/

int main() {
    char Imessage[100];                  //initialise an array of length 1024, used to remember our string
    char Omessage[100];                  //
    //FILE *input = fopen("input.txt", "r");
    //FILE *output = fopen("output.txt", "w");
    int n = 0, key = 0;
    
    printf("What is your message?\n");
    scanf("%c", Imessage);
   //fscanf(input, "%c", Imessage);
//   printf("What is your message?\n");   //ask user what they would like to encode
   
    while (n <= 100) {
        if (key = 0) {
            Omessage[n] = Imessage[n];
            break;
        } else if (Imessage[n] <= 90 - key) {
            Omessage[n] = Imessage[n] + key;
            break;
        } else if (Imessage[n] > 90 - key) {
            Omessage[n] = 65 + (key - (90 - Imessage[n]));
            break;
        } else if (Imessage[n] < 122 - key) {
            Omessage[n] = Imessage[n] - 32 + key;
            break;
        } else if (Imessage[n] > 122 - key) {
            Omessage[n] = 68 + (122 - Imessage[n]);
            break;
        } else {
            Omessage[n] = Imessage[n];
            break;
        }
        ++n;
    }
   
   printf("You gave: %s\n", Imessage);
   
   printf("Encoded as: %s\n", Omessage);
   return 0;
}
