#include <stdio.h>
#include <math.h>

char rotationEncrypt();
char rotationDecrypt();

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
            printf("Currently Under Development\n");
            break;
        case 4:
            printf("Currently Under Development\n");
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

char rotationEncrypt(){
    char array[1024] = {"RYAN MISTELBAUER\n"}; // Character array holding the message that is ready to be encrypted
    char array2[1024]; // Array that will hold the encrypted message
    int key = 4;
    int index;
    int k;
    

    for (index = 0; index < 1024; index++){
        if (array[index] < 65 || array[index] > 90){
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
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
    return array2[k];
}

char rotationDecrypt(){
    
    char array[1024] = {"GIWEV XLI TPIEWIV!!!\n"};
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
    return array2[k];
}
