/*
Ordinamento di un vettore attraverso il bubble sort,
algoritmo dimostratosi migliore ripsetto all'ordinamento normale perchè il numero di confronti eseguiti
è minore
*/

#include <stdio.h>
#include <stdlib.h>

#define NELEM 10
static int N;

typedef enum bool{
    falso,vero
}boolean;

//procedura che riordina il vettore
void bubble(int VETT[]);

int main(){
    int VETT[NELEM],i;
    printf("Introduci i valori \n");

    for(i=0;i<NELEM;i++){
        //riempie il vettore con gli elementi
        printf("Elemento di indice %d: \n",i+1);
        scanf("%d",&VETT[i]);
    }

    bubble(VETT);

    printf("\nVettore ordinato \n");

    for(i=0;i<NELEM;i++){
        //visualizza il vettore ordinato
        printf("Elemento di indice %d: %d \n ",i+1,VETT[i]);
    }
    
    return 0;
}

//procedura che riordina il vettore attraverso il buuble sort
void bubble(int VETT[]){
    int i,provv;
    boolean inordine = 0;

};