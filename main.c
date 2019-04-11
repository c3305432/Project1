#include <stdio.h>
#include <math.h>

int main(){
    
    /* Pseudocode
     * Encrytion/Decryption:
     * For encryption: 
    1. Take a character from a string array
    2. Take such charcter and knowing the key, add the character together with the key.
    3. Assign new values to the array
        IF ( character + key > 26)
            new_character = (25 + key) - character
    */
   
   char array[40] = {"RYAN MISTELBAUER"};
   char array2[40];
   int key = 4;
   int index;
   int k;
   
    
    
    
    for (index = 0; index < 26 - key; index++){
        if (array[index] < 65 || array[index] > 90){
            k = index;
            array2[k] = array[index];
            printf("%c", array2[k]);
            } else if (array[index] + key > 90){
               k = index;
               array2[k] = 155 - array[index];
               printf("%c", array2[k]); 
            } else {
            k = index;
            array2[k] = array[index] + key;
            printf("%c", array2[k]);
        }
    }

    for (index = 25; index >= (26 - key); index--){
        k = index;
        array2[k] = 155 - array[index];
        
        printf("%c", array2[k]);
        }   
    return 0;
}
