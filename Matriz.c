 #include <stdio.h>
 
 int main() {

    float Notas[4][3], soma;
    printf("Digite as 3 notas dos 4 alunos:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            scanf("%f", &Notas[i][j]);
    for (int i = 0; i < 4; i++) {
        soma = 0.0;
        for (int j = 0; j < 3; j++)
            soma += Notas[i][j];
        printf("Media %d: %.2f\n", i + 1, soma / 3.0);
    }
    return 0;
 }