#include <iostream>


int main(){
    FILE *fp;
    char ch;
    fp = fopen("UsePointers.cpp", "r");
    while(1){
        ch = fgetc(fp);
        if (ch==EOF)
            break;
        printf("%c", ch);
    }

    fclose(fp);
}