#include <stdio.h>
#include<ctype.h>

void countVowelConsonant(char arr[]) {
    int i = 0, vowel = 0,  consonant = 0;
    while(arr[i] != '\0'){
        char currentChar = tolower(arr[i]);
        if(currentChar >= 'a' && currentChar <= 'z'){
            if(currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
                currentChar == 'o' || currentChar == 'u'){
                vowel++;
            } else{
                consonant++;
            }
        }
        i++;    
    }
    
    printf("The no of vowels is: %d\n", vowel);
    printf("The no of consonants is: %d", consonant);
}

int main() {
    char inputString[1000];

    printf("Enter the string : \n");
    fgets(inputString, sizeof(inputString), stdin);
    countVowelConsonant(inputString);
    return 0;
}
