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
    int n, key;
    
    key = 2;
    
    scanf(" %[^\n]s\n", Imessage);
    while (n < 100) {
        Omessage[n] = Imessage[n];
        n++;
    }

    printf("The output is: %s\n", Omessage);
    /*for (n = 0; n <= 100; ++n) {
        if (key = 0) {
            Omessage[n] = Imessage[n];
        } else if (Imessage[n] <= 'Z' - key) {
            Omessage[n] = Imessage[n] + key;
        } else if (Imessage[n] > 'Z' - key) {
            Omessage[n] = 'A' + (key - (90 - Imessage[n]));
        } else if (Imessage[n] < 'z' - key) {
            Omessage[n] = Imessage[n] - 32 + key;
        } else if (Imessage[n] > 'z' - key) {
            Omessage[n] = 68 + (122 - Imessage[n]);
        } else {
            Omessage[n] = Imessage[n];
            break;
        }
    }*/
   printf("hi1\n");
   printf("hi2\n");
   return 0;
}
