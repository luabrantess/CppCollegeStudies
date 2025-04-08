#include <iostream>


using namespace std;

int main(){
    int numero, *ptr;
    numero = 101010;
    //ptr = ponteiro do tipo inteiro, mostra o conteudo
    ptr = &numero;

    std::cout << "Valor é " << *ptr << std::endl;
    std::cout << "Endereco é " << ptr << std::endl;

    return 0;
}