#include <stdio.h>

int main()
{
    int a = 5;
    int b =3;
    int result = 1;
    
    for(int i =0; i<b;i++){ 
        result = result * a; 
    }

    printf("%d raised to the power %d is : %d", a, b, result);
    return 0;
}
