#include <stdio.h>

int suma(){
    int operador1 =4;
    int operador2 =3;
    int suma= operador1 + operador2;
    return suma;
}

int main(int argc,char *argv[]){
    printf("La suma es: %i \n", suma());
    return 0;
}

