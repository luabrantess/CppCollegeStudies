#include <stdio.h>
#include <stdlib.h>

int SomaDigito(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + SomaDigito(n / 10);
        
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