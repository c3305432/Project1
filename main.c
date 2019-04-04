#include <stdio.h>

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
   
   char array[]= {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
   char array2[26];
   int key = 4;
   int index;
   int k;
   
    
    
    
    for (index = 0; index <= 26; index++){
        k = index;
        array2[k] = array[index] + key;
        if ((array2[k]) > 90 ){
            for (k = 25; k >= 25 - key; k--){
            index = k;
            array2[k] = (155) - array[index];
            }
        }
        printf("%c", array2[k]);
    }
    return 0;
}
