#include <stdio.h>
#include <stdlib.h>

int SomaDigito(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + SomaDigito(n / 10);
        // n % 10 retorna o último dígito
        // n / 10 remove o último dígito
        // 4 + SomaDigito(123) = 4 + 3 + SomaDigito(12) = 4 + 3 + 2 + SomaDigito(1) = 4 + 3 + 2 + 1 + SomaDigito(0) = 4 + 3 + 2 + 1 + 0 = 10    
        
}

int main(){

    int n;  

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido\n");
        return 1;
    }

    int soma = SomaDigito(n);
    printf("A soma dos digitos de %d eh: %d\n", n, soma);

}