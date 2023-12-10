
#include <stdio.h>
#include<string.h>

int isLower(char ch){
    return ch >= 'a' && ch <= 'z';
}


char decode(char ch){
    if(ch != ' '){
        if (isLower(ch)) return ch - 32;
        return ch;
    } else{
        return ch;
    }
}

int main()
{
    char input[100];
    printf("Enter the string: ");
    fgets(input, sizeof(input), stdin);

    for(int i =0; input[i] != '\n'; i++){
        input[i] = decode(input[i]);
    }
    puts(input);

    return 0;
}
