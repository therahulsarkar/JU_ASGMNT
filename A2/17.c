
#include <stdio.h>
#include<string.h>

int isLower(char ch){
    return ch >= 'a' && ch <= 'z';
}

int isUpper(char ch){
    return ch >= 'A' && ch <= 'Z';
}

int isDigit(char ch){
    return ch >= '0' && ch <= '9';
}

char decode(char ch){
    if(ch != ' '){
        if(isUpper(ch)) return (ch == 'Z') ? 'A' : ch + 1 ;
        else  if(isLower(ch)) return (ch == 'z') ? 'a' : ch + 1;
        else if (isDigit(ch)) return (ch == '9') ? '0' : ch + 1;
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
