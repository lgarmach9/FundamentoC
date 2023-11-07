#include <stdio.h>

int main(int argc,char *argv[]){
    char* agenda[10][4];
    
    agenda [0][0]= "Laura";
    agenda [0][1]= "Garcia Marchan";
    agenda [0][2]= "6763415";
    agenda [0][3]= "laura@gmail.com";
    
    agenda [1][0]= "Elena";
    agenda [1][1]= "Perez Sanchez";
    agenda [1][2]= "5616";
    agenda [1][3]= "elena@gmail.com";
    
    printf("El correo del segundo registro de la agenda es: %s \n", agenda[1][3]);
        
    return 0;
}
