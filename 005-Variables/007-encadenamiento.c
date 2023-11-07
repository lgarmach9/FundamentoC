#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    
    char nombre[]="Laura ";
    char apellidos[]= "Garcia Marchan";
    
    strcat(nombre,apellidos);
    printf("Mi nombre completo es: %s",nombre);
    return 0;
}