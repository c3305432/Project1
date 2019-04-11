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
            rotationEncrypt();
            break;
        case 2:
            rotationDecrypt();
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
            printf("Feature not found\n");
    }
  
    
     
    return 0;
}

char rotationEncrypt(){
    char array[1024] = {"RYAN MISTELBAUER\n"};
    char array2[1024];
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
        if (array[index] < 65 || array[index] > 90){
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
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
