#include <iostream>
#include <string>

using namespace std;

struct Book{
    string name;
    int pages;
    string author;

    Book(string n, int p, string a){
        name = n;
        pages = p;
        author = a;
    }

};

typedef struct {
    int x;
    int y;

} Ponto;

int main(){

    Book b1("A culpa é das estrelas", 300, "Fulano");
    std::cout << "O nome é " << b1.name <<std::endl ;
    std::cout << "As páginas são " << b1.pages << std::endl;

    Ponto p1;
    p1.x = 1;
    p1.y = 2;

    Ponto* p2 = new Ponto;
    p2->x = 5;
    p2->y = 7;

    std::cout << "P1 é " << p1.x << " e " << p1.y << std::endl;
    std::cout << "P2 é " << p2->x << " e " << p2->y << std::endl;

}