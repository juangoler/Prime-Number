#include <stdio.h>

int main(){
    int numero, i, primo = 1;

    printf("Digite o número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("O número NÃO é primo.\n");
        return 0;
    }

    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf ("O número %d é primo.\n", numero);
    } else {
        printf ("O número %d NÃO é primo.\n", numero);
    }

    return 0;
}