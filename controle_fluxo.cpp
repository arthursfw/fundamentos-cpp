#include <stdio.h>

int main() {
    int idade = 20;

    if (idade < 18) {
        printf("Menor de idade\n");
    } else if (idade >= 18 && idade < 65) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}
