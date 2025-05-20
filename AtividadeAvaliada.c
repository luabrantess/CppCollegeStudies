void IntercalaVetores(char *V1, char *V2, char *V3) {
    if (*V1 == '\0' && *V2 == '\0') {
        *V3 = '\0';
        return;
    }

    if (*V1 != '\0' && *V2 != '\0') {
        *V3 = *V1;
        *(V3 + 1) = *V2;
        IntercalaVetores(V1 + 1, V2 + 1, V3 + 2);
    } else if (*V1 != '\0') {
        *V3 = *V1;
        IntercalaVetores(V1 + 1, V2, V3 + 1);
    } else { // *V2 != '\0'
        *V3 = *V2;
        IntercalaVetores(V1, V2 + 1, V3 + 1);
    }
}


float MediaDig(int Numero, unsigned int Tamanho, float Soma){
    if (Numero == 0){
        if (Tamanho == 0){
            return 0.0;
        }
        return 0.0;
    }
    return MediaDig(Numero/10, Tamanho + 1, Soma + (Numero%10));

}

int ChecaParenteses(char *expr, int count){
    if (*expr == '\0') {
        if (count == 0) return 0;
        if (count > 0) return -1;
        return 1;
    }

    if (*expr == '(') count++;
    else if (*expr == ')') count--;

    if (count < 0) return 1;

    return ChecaParenteses(expr + 1, count);
}
