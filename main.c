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
    char Omessage[100], temp;                  //
    int n, key;
    
    printf("Enter a message to encrypt: \n");
    scanf("%s", Imessage);
    printf("Enter a key: \n");
    scanf("%d", &key);
    
    for (n = 1; Imessage[n] != '\n'; ++n) {
        temp = Imessage[n];
        if (key = 0) {
            break;
        } else if (temp >= 'A' && temp <= 'Z') {
            temp = temp + key;
            if (temp > 'Z') {
                temp = temp - 'Z' + 'A' - 1;
            }
        } else if (temp >= 'a' && temp <= 'z') {
            temp = temp + key;
            if (temp > 'z') {
                temp = temp - 'z' + 'a' - 1;
            }
        }
        Omessage[n] = temp;
    }
    printf("Your message is: %s\n", Omessage);
    return 0;
}
