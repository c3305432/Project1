#include <stdio.h>
#include <math.h>

void rotationEncrypt(); // Function Prototype
void rotationDecrypt(); // Function Prototype
void substituteEncrypt(); // Function Prototype
void substituteDecrypt(); // Function Prototype
void keylessRotation(); // Function Prototype

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
    
    switch  (choice){ // Use switch case to choose between different function calls
        case 1:
            rotationEncrypt(); // Calls the function rotationEncrypt to encrypt the message
            break;
        case 2:
            rotationDecrypt(); // Calls the function rotationDecrypt to decrypt the message
            break;
        case 3:
            substituteEncrypt(); // Calls the function substituteEncrypt to encrypt message
            break;
        case 4:
            substituteDecrypt(); // Calls the function substituteDecrypt to decrypt message
            break;
        case 5:
            keylessRotation(); // Calls the function keylessRotation to decrypt message
            break;
        case 6:
            printf("Currently Under Development\n"); // Prints user friendly message to warn that the program is not available at this moment
            break;
        default:
            printf("Feature not found\n"); // Prints a message if number is outside of the range of 1 - 6
    }
  
    
     
    return 0;
}
/*Function that will encrypt a message using rotation*/
void rotationEncrypt(){
    char array[1024] = {"Ryan Mistelbauer\n"}; // Character array holding the message that is ready to be encrypted with 1025 characters
    char array2[1024]; // Array that will hold the encrypted message with 1025 characters
    int key = 6; // Variable key that will decide how far to shift each letter
    int index; // variable used as a counter in a loop
    int k; // Variable used as a counter in a loop
    

    for (index = 0; index < 1024; index++){ // Begin loop for first 1024 characters
        if (array[index] < 65 || array[index] > 122){ // Set boundaries for each character if outside range
            k = index; // Assign variable k to each index value
            array2[k] = array[index]; // Assign character value from one array to another with no change
            printf("%c", array2[k]); // Print character 
            
        } else if (array[index] > 90 && array[index] < 97) { // If inside range but unwanted values set new boundaries
            k = index; // Initialise k as the value of index
            array2[k] = array[index]; // New charcter becomes the same as the old one with no change
            printf("%c", array2[k]); // Print charcater
            
        } else if (array[index] >= 97 && array[index] <= 122) { // If lowercase
            array[index] = array[index] - 32; // Subtract 32 to get uppercase letter
            
            if (array[index] + key > 90){ // if new letter is outside range
                k = index; // initialise k to value of index 
                array2[k] = 156 - array[index]; // Algorithm to take changed character and assign it to the new character
                printf("%c", array2[k]); // Print character
            
            } else {
                k = index; // initialise k to index
                array2[k] = array[index] + key; // Add old letter with key to form new letter
                printf("%c", array2[k]); // Print charcater 
        }
            } else if (array[index] + key > 90){ // if new letter is outside range 
               k = index; // intitialise k to new value
               array2[k] = 156 - array[index]; // Algorithm to form new letter
               printf("%c", array2[k]); // Print character 
               
            } else {
                k = index; // intialise k to value of index
                array2[k] = array[index] + key; // Add key to old letter value
                printf("%c", array2[k]); // PRint character
        }
         
    }
}
/* Function that will decrypt a message via rotation*/
void rotationDecrypt(){
    
    char array[1024] = {"vcer qmwxipfeyiv\n"}; // Message to be decrypted
    char array2[1024]; // NEw array that will hold new charcter values
    int key = 4; //OFf set of the decryption
    int index; // Counter for a loop
    int k; // Counter for a loop
    

    for (index = 0; index < 1024; index++){ // For first 1025 charcter values
        if (array[index] < 65 || array[index] > 122){ // if outside range,
            k = index; // k is assigned to the value of index, then array 2 is assigned the value of array
            array2[k] = array[index];
            printf("%c", array2[k]); // Which is then printed
            
        } else if (array[index] > 90 && array[index] < 97) { //IF inside range but unwanted values
            k = index;                                           // k is assigned to value of index
            array2[k] = array[index]; // Then the second array value is assign to the first array value
            printf("%c", array2[k]); // Print the character
            
        } else if (array[index] >= 97 && array[index] <= 122) { // IF lowercase, subtract 32
            array[index] = array[index] - 32;
            
                if (array[index] - key < 65){ // IF algorithm is less than 65
                    k = index; // intialise index
                    array2[k] = array[index] + (26 - key); // form new algorithm to find new letter
                    printf("%c", array2[k]); // PRint new letter
               
        } else {
            k = index; // intialise k
            array2[k] = array[index] - key; // subtract key from original character
            printf("%c", array2[k]); // and then print
        }
            } else if (array[index] - key < 65){ // if algorithm is less than 65
               k = index; // intialise k to value of index
               array2[k] = array[index] + (26 - key); // form new algorithm
               printf("%c", array2[k]); // and then print charcater
               
            } else {
                
            k = index; // intialise k to value of index
            array2[k] = array[index] - key; // Subtract the key from the original charcter
            printf("%c", array2[k]); // PRint charcater
        }
         
    }
}

// Function that will encrypt using the key CZMAGRSJWHOKYBCUIVFLNPQEXT
void substituteEncrypt(){
    char array[1024] = {"Ryan Mistelbauer is a genius!\n"}; // Original message
    char array2[1024]; // New message to be created
    int index; // counter
    int k; // counter
    

    for (index = 0; index < 1024; index++){ // for first 1025 charcters
       k = index; // intialise k to value of index
       switch(array[index]) {
           case 'A':
           case 'a':
                array2[k] = 'C';
                printf("%c", array2[k]); // IF charcter is is equal to A or a, change to C
                break;
           case 'B':
           case 'b':
                array2[k] = 'Z';
                printf("%c", array2[k]); // IF charcter is is equal to B or b, change to Z
                break;
           case 'C':
           case 'c':
                array2[k] = 'M';
                printf("%c", array2[k]); // IF charcter is is equal to C or c, change to M
                break;
           case 'D':
           case 'd':
                array2[k] = 'A';
                printf("%c", array2[k]); // Change D or d to A
                break;
           case 'E':
           case 'e':
                array2[k] = 'G';
                printf("%c", array2[k]); // change E or e to G
                break;
           case 'F':
           case 'f':
                array2[k] = 'R'; // Change F or f to R
                printf("%c", array2[k]);
                break;
           case 'G':
           case 'g':
                array2[k] = 'S'; // change G to S
                printf("%c", array2[k]);
                break;
           case 'H':
           case 'h':
                array2[k] = 'J'; // change H to J
                printf("%c", array2[k]);
                break;
           case 'I':
           case 'i':
                array2[k] = 'W';
                printf("%c", array2[k]); // Change I to W
                break;
           case 'J':
           case 'j':
                array2[k] = 'H';
                printf("%c", array2[k]); // Change J to H
                break;
           case 'K':
           case 'k':
                array2[k] = 'O';
                printf("%c", array2[k]); // chnage K to O
                break;
           case 'L':
           case 'l':
                array2[k] = 'K';
                printf("%c", array2[k]); // Change L to K
                break;
           case 'M':
           case 'm':
                array2[k] = 'Y';
                printf("%c", array2[k]); // Chaneg M to Y
                break;
           case 'N':
           case 'n':
                array2[k] = 'B';
                printf("%c", array2[k]); // Change N to B
                break;
           case 'O':
           case 'o':
                array2[k] = 'D'; // Change O to D
                printf("%c", array2[k]);
                break;
           case 'P':
           case 'p':
                array2[k] = 'U';
                printf("%c", array2[k]); // Change P to I
                break;
           case 'Q':
           case 'q':
                array2[k] = 'I'; // Change Q to I
                printf("%c", array2[k]);
                break;
           case 'R':
           case 'r':
                array2[k] = 'V';
                printf("%c", array2[k]); // Change R to V
                break;
           case 'S':
           case 's':
                array2[k] = 'F';
                printf("%c", array2[k]); // Change S to F
                break;
           case 'T':
           case 't':
                array2[k] = 'L';
                printf("%c", array2[k]); // Change T to L
                break;
           case 'U':
           case 'u':
                array2[k] = 'N';
                printf("%c", array2[k]); // Change U to N
                break;
           case 'V':
           case 'v':
                array2[k] = 'P';
                printf("%c", array2[k]); // V to P
                break;
           case 'W':
           case 'w':
                array2[k] = 'Q';
                printf("%c", array2[k]); // Change W to Q
                break;
           case 'X':
           case 'x':
                array2[k] = 'E';
                printf("%c", array2[k]); //Change X to E 
                break;
           case 'Y':
           case 'y':
                array2[k] = 'X';
                printf("%c", array2[k]); // Change Y to X
                break;
           case 'Z':
           case 'z':
                array2[k] = 'T';
                printf("%c", array2[k]); // Change Z to T
                break; 
           default:
                array2[k] = array[index];
                printf("%c", array2[k]); // No change
       }
         
    }

}

// Decrypt using the key czmagrsjwhokybduivflnpqext
void substituteDecrypt(){
    char array[1024] = {"czmagrsjwhokybduivflnpqext\n"}; // old message
    char array2[1024]; //new message
    int index; // counter
    int k; // counter
    

    for (index = 0; index < 1024; index++){ //for first 1025 charcters
       k = index; // k is assign to the value of index
       switch(array[index]) {
           case 'A':
           case 'a':
                array2[k] = 'D';
                printf("%c", array2[k]); // A becomes D
                break;
           case 'B':
           case 'b':
                array2[k] = 'N';
                printf("%c", array2[k]); //B becomes N
                break;
           case 'C':
           case 'c':
                array2[k] = 'A';
                printf("%c", array2[k]); // C becomes A
                break;
           case 'D':
           case 'd':
                array2[k] = 'O';
                printf("%c", array2[k]); // D becomes O
                break;
           case 'E':
           case 'e':
                array2[k] = 'X';
                printf("%c", array2[k]); // E becomes X
                break;
           case 'F':
           case 'f':
                array2[k] = 'S';
                printf("%c", array2[k]); // F becomes S
                break;
           case 'G':
           case 'g':
                array2[k] = 'E';
                printf("%c", array2[k]);// G becomes E
                break;
           case 'H':
           case 'h':
                array2[k] = 'J';
                printf("%c", array2[k]); // H becomes J 
                break;
           case 'I':
           case 'i':
                array2[k] = 'Q';
                printf("%c", array2[k]); // I becomes Q
                break;
           case 'J':
           case 'j':
                array2[k] = 'H';
                printf("%c", array2[k]);
                break; // J becomes H
           case 'K':
           case 'k':
                array2[k] = 'L';
                printf("%c", array2[k]);
                break; // K becomes L
           case 'L':
           case 'l':
                array2[k] = 'T';
                printf("%c", array2[k]);
                break; // L becomes T
           case 'M':
           case 'm':
                array2[k] = 'C';
                printf("%c", array2[k]);
                break; // M becomes C
           case 'N':
           case 'n':
                array2[k] = 'U';
                printf("%c", array2[k]);
                break; // N becomes U
           case 'O':
           case 'o':
                array2[k] = 'K';
                printf("%c", array2[k]);
                break; // O becomes K
           case 'P':
           case 'p':
                array2[k] = 'V';
                printf("%c", array2[k]);
                break; // P becomes V
           case 'Q':
           case 'q':
                array2[k] = 'W';
                printf("%c", array2[k]); // Q becomes W
                break;
           case 'R':
           case 'r':
                array2[k] = 'F';
                printf("%c", array2[k]); // R becomes F
                break;
           case 'S':
           case 's':
                array2[k] = 'G';
                printf("%c", array2[k]); // S becomes G
                break;
           case 'T':
           case 't':
                array2[k] = 'Z';
                printf("%c", array2[k]); // T becomes Z
                break;
           case 'U':
           case 'u':
                array2[k] = 'P';
                printf("%c", array2[k]);
                break; //U becomes P
           case 'V':
           case 'v':
                array2[k] = 'R';
                printf("%c", array2[k]);
                break; // V becomes R
           case 'W':
           case 'w':
                array2[k] = 'I';
                printf("%c", array2[k]);
                break; // W becomes I
           case 'X':
           case 'x':
                array2[k] = 'Y';
                printf("%c", array2[k]);
                break; // X becomes Y
           case 'Y':
           case 'y':
                array2[k] = 'M';
                printf("%c", array2[k]);
                break; // Y becomes M
           case 'Z':
           case 'z':
                array2[k] = 'B';
                printf("%c", array2[k]);
                break; // Z becomes B
           default:
                array2[k] = array[index];
                printf("%c", array2[k]); // No change
       }
         
    }

}

void keylessRotation(){
    char array[1024] = {"vcer qmwxipfeyiv\n"}; // Original message
    char array2[1024]; // NEw message 
    int key = 1; // intitialse key to 1 for a while loop
    int choice; // variable to be changed when the user is ready
    int index; // counter
    int k; // counter

while(key < 26){   // For all possible combinations
    for (index = 0; index < 1024; index++){ // and the first 1025  charcaters
        if (array[index] < 65 || array[index] > 122){ // if outside range
            k = index;          // intitialise k
            array2[k] = array[index]; // set new array to old array values
            printf("%c", array2[k]); // print charcaters
            
        } else if (array[index] > 90 && array[index] < 97) { //if outsise range and unwanted charcaters
            k = index; // initialse k
            array2[k] = array[index]; // set new array to old array values
            printf("%c", array2[k]); // print charactyer
        
        } else if (array[index] >= 97 && array[index] <= 122) { //if lower case
            array[index] = array[index] - 32; // Form algorithm to make uppercase
                
            if (array[index] - key < 65){ // if becomes outside range
               k = index; // intialise k
               array2[k] = array[index] + (26 - key); // from new algorithm
               printf("%c", array2[k]); // print charcater
               
            } else {
            k = index; // initialise k
            array2[k] = array[index] - key; // subtract key from old character
            printf("%c", array2[k]); // PRint charcater
            }
        } else if (array[index] - key < 65){ // if outside range
               k = index; // intitialise k
               array2[k] = array[index] + (26 - key); // form new letter using algorithm
               printf("%c", array2[k]); // PRint charcater
               
            } else {
            k = index; // intialise k
            array2[k] = array[index] - key; // Subtract key from old charcter
            printf("%c", array2[k]); // PRint charcter
        }
    
  }
    printf("Is this the correct decryption? Press 1 for yes and 0 for no\n");
    scanf("%d", &choice); // Ask if decryption is correct and scans in choice
    if (choice == 0){ // if no 
      key++;    // add 1 to the key
    } else { // if yes
      key = 26; // stop loop
    }
  }
}
