#include <stdio.h>

int main(){
    int counter=execute();
    printFooter(counter);
    // comentario
    return 0;
}

int execute(){
    int counter=0;
    int valor=0;
    while (valor>=0) {
        printf("Ingrese valores(negativo para finalizar): ");
        //scanf tira lo que lee a una pos de memoria por eso el &
        int ret=scanf("%d", &valor);
        if(valor>0 && valor%2==0){
            counter++;
        }
    }
    return counter;

}

void printFooter(int c){
    printf("Cantidad de pares: %d\n", c);
    printf("Fin del programa.");
}
