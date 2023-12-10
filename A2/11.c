
#include <stdio.h>
#include<string.h>
#define R 5
#define C 4

void traspose(int input[R][C], int output[C][R]){
    for(int i =0; i<R; i++){
        for(int j =0; j<C; j++){
            output[j][i] = input[i][j];
        }
    }
}

int main()
{
    int input[R][C] = {
        {10, 20, 30, 40},
        {12, 14, 16, 18},
        {24, 26, 32, 56},
        {18, 22, 42, 60},
        {62, 20, 5, 11}
    };
    
    int output[C][R];
    int i, j;
    

    printf("\nBefore performing transpose \n");
    for(i =0; i<R; i++){
        for(j =0; j<C; j++){
            printf("%d ", input[i][j]);
        }
        printf("\n");
    }
    
    traspose(input,output);
    
    printf("\nAfter performing transpose \n");
    for(i =0; i<C; i++){
        for(j =0; j<R; j++){
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }

    return 0;
}

