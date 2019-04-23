#include <stdio.h>
#include <math.h>

void rotationEncrypt();
void rotationDecrypt();
void substituteEncrypt();
void substituteDecrypt();

int main(){
    int choice;
    
    /* Print information to console for user to read 
       and then enter an integer to signal their choice */  
    printf("(1) Rotation Encryption\n");
    printf("(2) Rotation Decryption\n");
    printf("(3) Substitution Encryption\n");
    printf("(4) Substitution Decryption\n");
    printf("(5) Rotation Decryption without a key\n");
    printf("(6) Substitution Decryption without a key\n");
    printf("Please enter your choice number> ");
    scanf("%d", &choice); //Scan in choice and assign it to the variable choice
    
    switch  (choice){ //
        case 1:
            rotationEncrypt(); // Calls the function rotationEncrypt to encrypt the message
            break;
        case 2:
            rotationDecrypt(); // Calls the function rotationDecrypt to decrypt the message
            break;
        case 3:
            substituteEncrypt();
            break;
        case 4:
            substituteDecrypt();
            break;
        case 5:
            printf("Currently Under Development\n");
            break;
        case 6:
            printf("Currently Under Development\n");
            break;
        default:
            printf("Feature not found\n"); // Prints a message if number is outside of the range of 1 - 6
    }
  
    
     
    return 0;
}

void rotationEncrypt(){
    char array[1024] = {"Ryan Mistelbauer\n"}; // Character array holding the message that is ready to be encrypted
    char array2[1024]; // Array that will hold the encrypted message
    int key = 4;
    int index;
    int k;
    

    for (index = 0; index < 1024; index++){
        if (array[index] < 65 || array[index] > 122){
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
            } else if (array[index] > 90 && array[index] < 97) {
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
            } else if (array[index] >= 97 && array[index] <= 122) {
            array[index] = array[index] - 32;
                if (array[index] + key > 90){
               k = index;
               array2[k] = 156 - array[index];
               printf("%c", array2[k]); 
            } else {
            k = index;
            array2[k] = array[index] + key;
            printf("%c", array2[k]);
        }
            } else if (array[index] + key > 90){
               k = index;
               array2[k] = 156 - array[index];
               printf("%c", array2[k]); 
            } else {
            k = index;
            array2[k] = array[index] + key;
            printf("%c", array2[k]);
        }
         
    }
}

void rotationDecrypt(){
    
    char array[1024] = {"vcer qmwxipfeyiv\n"};
    char array2[1024];
    int key = 4;
    int index;
    int k;
    

    for (index = 0; index < 1024; index++){
        if (array[index] < 65 || array[index] > 122){
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
            } else if (array[index] > 90 && array[index] < 97) {
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
            } else if (array[index] >= 97 && array[index] <= 122) {
            array[index] = array[index] - 32;
                if (array[index] - key < 65){
               k = index;
               array2[k] = array[index] + (26 - key);
               printf("%c", array2[k]); 
            } else {
            k = index;
            array2[k] = array[index] - key;
            printf("%c", array2[k]);
        }
            } else if (array[index] - key < 65){
               k = index;
               array2[k] = array[index] + (26 - key);
               printf("%c", array2[k]); 
            } else {
            k = index;
            array2[k] = array[index] - key;
            printf("%c", array2[k]);
        }
         
    }
}


void substituteEncrypt(){
    char array[1024] = {"Ryan Mistelbauer is a genius!\n"};
    char array2[1024];
    int index;
    int k;
    

    for (index = 0; index < 1024; index++){
       k = index;
       switch(array[index]) {
           case 'A':
           case 'a':
                array2[k] = 'C';
                printf("%c", array2[k]);
                break;
           case 'B':
           case 'b':
                array2[k] = 'Z';
                printf("%c", array2[k]);
                break;
           case 'C':
           case 'c':
                array2[k] = 'M';
                printf("%c", array2[k]);
                break;
           case 'D':
           case 'd':
                array2[k] = 'A';
                printf("%c", array2[k]);
                break;
           case 'E':
           case 'e':
                array2[k] = 'G';
                printf("%c", array2[k]);
                break;
           case 'F':
           case 'f':
                array2[k] = 'R';
                printf("%c", array2[k]);
                break;
           case 'G':
           case 'g':
                array2[k] = 'S';
                printf("%c", array2[k]);
                break;
           case 'H':
           case 'h':
                array2[k] = 'J';
                printf("%c", array2[k]);
                break;
           case 'I':
           case 'i':
                array2[k] = 'W';
                printf("%c", array2[k]);
                break;
           case 'J':
           case 'j':
                array2[k] = 'H';
                printf("%c", array2[k]);
                break;
           case 'K':
           case 'k':
                array2[k] = 'O';
                printf("%c", array2[k]);
                break;
           case 'L':
           case 'l':
                array2[k] = 'K';
                printf("%c", array2[k]);
                break;
           case 'M':
           case 'm':
                array2[k] = 'Y';
                printf("%c", array2[k]);
                break;
           case 'N':
           case 'n':
                array2[k] = 'B';
                printf("%c", array2[k]);
                break;
           case 'O':
           case 'o':
                array2[k] = 'D';
                printf("%c", array2[k]);
                break;
           case 'P':
           case 'p':
                array2[k] = 'U';
                printf("%c", array2[k]);
                break;
           case 'Q':
           case 'q':
                array2[k] = 'I';
                printf("%c", array2[k]);
                break;
           case 'R':
           case 'r':
                array2[k] = 'V';
                printf("%c", array2[k]);
                break;
           case 'S':
           case 's':
                array2[k] = 'F';
                printf("%c", array2[k]);
                break;
           case 'T':
           case 't':
                array2[k] = 'L';
                printf("%c", array2[k]);
                break;
           case 'U':
           case 'u':
                array2[k] = 'N';
                printf("%c", array2[k]);
                break;
           case 'V':
           case 'v':
                array2[k] = 'P';
                printf("%c", array2[k]);
                break;
           case 'W':
           case 'w':
                array2[k] = 'Q';
                printf("%c", array2[k]);
                break;
           case 'X':
           case 'x':
                array2[k] = 'E';
                printf("%c", array2[k]);
                break;
           case 'Y':
           case 'y':
                array2[k] = 'X';
                printf("%c", array2[k]);
                break;
           case 'Z':
           case 'z':
                array2[k] = 'T';
                printf("%c", array2[k]);
                break; 
           default:
                array2[k] = array[index];
                printf("%c", array2[k]);
       }
         
    }

}

void substituteDecrypt(){
     char array[1024] = {"Vxcb YwFlGkZcNgV\n"};
    char array2[1024];
    int index;
    int k;
    

    for (index = 0; index < 1024; index++){
       k = index;
       switch(array[index]) {
           case 'A':
           case 'a':
                array2[k] = 'D';
                printf("%c", array2[k]);
                break;
           case 'B':
           case 'b':
                array2[k] = 'N';
                printf("%c", array2[k]);
                break;
           case 'C':
           case 'c':
                array2[k] = 'A';
                printf("%c", array2[k]);
                break;
           case 'D':
           case 'd':
                array2[k] = 'O';
                printf("%c", array2[k]);
                break;
           case 'E':
           case 'e':
                array2[k] = 'X';
                printf("%c", array2[k]);
                break;
           case 'F':
           case 'f':
                array2[k] = 'S';
                printf("%c", array2[k]);
                break;
           case 'G':
           case 'g':
                array2[k] = 'E';
                printf("%c", array2[k]);
                break;
           case 'H':
           case 'h':
                array2[k] = 'J';
                printf("%c", array2[k]);
                break;
           case 'I':
           case 'i':
                array2[k] = 'W';
                printf("%c", array2[k]);
                break;
           case 'J':
           case 'j':
                array2[k] = 'H';
                printf("%c", array2[k]);
                break;
           case 'K':
           case 'k':
                array2[k] = 'L';
                printf("%c", array2[k]);
                break;
           case 'L':
           case 'l':
                array2[k] = 'T';
                printf("%c", array2[k]);
                break;
           case 'M':
           case 'm':
                array2[k] = 'C';
                printf("%c", array2[k]);
                break;
           case 'N':
           case 'n':
                array2[k] = 'U';
                printf("%c", array2[k]);
                break;
           case 'O':
           case 'o':
                array2[k] = 'K';
                printf("%c", array2[k]);
                break;
           case 'P':
           case 'p':
                array2[k] = 'V';
                printf("%c", array2[k]);
                break;
           case 'Q':
           case 'q':
                array2[k] = 'W';
                printf("%c", array2[k]);
                break;
           case 'R':
           case 'r':
                array2[k] = 'F';
                printf("%c", array2[k]);
                break;
           case 'S':
           case 's':
                array2[k] = 'G';
                printf("%c", array2[k]);
                break;
           case 'T':
           case 't':
                array2[k] = 'Z';
                printf("%c", array2[k]);
                break;
           case 'U':
           case 'u':
                array2[k] = 'P';
                printf("%c", array2[k]);
                break;
           case 'V':
           case 'v':
                array2[k] = 'R';
                printf("%c", array2[k]);
                break;
           case 'W':
           case 'w':
                array2[k] = 'I';
                printf("%c", array2[k]);
                break;
           case 'X':
           case 'x':
                array2[k] = 'Y';
                printf("%c", array2[k]);
                break;
           case 'Y':
           case 'y':
                array2[k] = 'M';
                printf("%c", array2[k]);
                break;
           case 'Z':
           case 'z':
                array2[k] = 'B';
                printf("%c", array2[k]);
                break; 
           default:
                array2[k] = array[index];
                printf("%c", array2[k]);
       }
         
    }

}
