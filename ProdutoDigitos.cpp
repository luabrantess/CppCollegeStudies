#include <stdio.h>
#include <stdlib.h>

int ProdutoDigito(int a, int b){
    if (a == 0 or b == 0 )
        return 1;
    else
        return a + ProdutoDigito(a, b-1);
        // ProdutoDigito(5,3)
        // 5 + ProdutoDigito(5,2)
        // 5 + 5 + ProdutoDigito(5,1)
        // 5 + 5 + 5 + ProdutoDigito(5,0)
        // 5 + 5 + 5 + 0 = 15
        
}

int main(){
    int a;  
    int b;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);

    printf("Digite um numero inteiro: \n");
    scanf("%d", &b);

    if (a < 0 or b < 0) {
        printf("Numero invalido\n");
        return 1;
    }

    int produto = ProdutoDigito(a,b);
    printf("O produto dos digitos de %d e %d eh: %d\n", a, b, produto-1);
}