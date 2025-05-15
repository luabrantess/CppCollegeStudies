#include <stdio.h>
#include <stdlib.h>

int PotenciaRecursiva(int x, int n){
    if (n == 0) return 1; 
    return x * PotenciaRecursiva(x, n - 1);     
}

int main(){
    int x, n;

    printf("Digite o numero x:");
    scanf("%d", &x);

    printf("Digite o numero n:");
    scanf("%d", &n);

    int potencia = PotenciaRecursiva(x, n);
    printf("Resultado: %d\n", potencia);
}