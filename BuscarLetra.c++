#include <iostream>

bool BuscarLetra(char vetor[], int tamanho, char letra){
    for(int i=0; i < tamanho; i++){
        if(vetor[i]==letra){
            return letra;
        }
    }

    return false;
}

int main(){
    char vetor[] = {'a','b','c','d','e','f'};
    int tamanho = sizeof(vetor);
    char letra;

    std::cout << "Qual letra vc quer encontrar?";
    std::cin >> letra;
}