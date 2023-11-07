#include <stdio.h>

int suma(int op1, int op2){
    int operador1 =op1;
    int operador2 =op2;
    int suma= operador1 + operador2;
    return suma;
}

int main(int argc,char *argv[]){
    printf("La suma es: %i \n", suma(4,3));
    printf("La suma es: %i \n", suma(5,7));
    printf("La suma es: %i \n", suma(8,2));
    return 0;
}

