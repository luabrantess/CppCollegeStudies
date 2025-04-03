#include <iostream>

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

int main(){

    Book b1("A culpa é das estrelas", 300, "Fulano");
    std::cout << b1.name;
}