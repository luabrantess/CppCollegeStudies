#include <iostream>


int main(){
    FILE *fp;
    char ch;
    fp = fopen("UsePointers.cpp", "r");
    //busca no disco -> carrega em um espaco de memoria chamado buffer -> um ponteiro 
    //char aponta para o primeiro caracter do buffer
    while(1){
        ch = fgetc(fp);
        // file get char, obtem o caracter de um arquivo.
        if (ch==EOF)
        //will be ok in any system.
            break;
        printf("%c", ch);
    }

    fclose(fp);
}