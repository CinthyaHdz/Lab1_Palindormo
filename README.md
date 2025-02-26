#include <stdio.h>
#include <stdbool.h> 

// Prototipo de funcion
bool isPalindrome(int x);

int main() {
    int num;
    
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("El numero %d es un palindromo.\n", num);
    } else {
        printf("El numero %d no es un palindromo.\n", num);
    }
    
    return 0;
}

bool isPalindrome(int x) {
    int mitadInvertida = 0, temporal = x;

    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    
    while (temporal > mitadInvertida) {
        mitadInvertida = mitadInvertida * 10 + temporal % 10;
        temporal /= 10;
    }

    return temporal == mitadInvertida || temporal == mitadInvertida / 10;
}
