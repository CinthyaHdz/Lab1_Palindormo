#include <stdio.h>
#include <stdbool.h> 

// Prototipo de funcion
bool isPalindrome(int x);

int main() {
    int num;
    
    printf("Ingrese un n�mero: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("El n�mero %d es un pal�ndromo.\n", numero);
    } else {
        printf("El n�mero %d no es un pal�ndromo.\n", numero);
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

