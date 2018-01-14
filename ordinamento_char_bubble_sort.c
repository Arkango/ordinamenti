/*
Ordinamento di un vettore attraverso il bubble sort,
algoritmo dimostratosi migliore ripsetto all'ordinamento normale perchè il numero di confronti eseguiti
è minore
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define NELEM 10
#define L_MAX 50
static int N;


//procedura che riordina il vettore
void bubble(char VETT[][L_MAX]);

int main(){
    char parole [NELEM][L_MAX];
    int i;
    printf("Introduci  le parole \n");

    for(i=0;i<NELEM;i++){
        //riempie il vettore con gli elementi
        printf("Parola di indice %d: \n",i+1);
        fgets(parole[i],50,stdin);
    }

    bubble(parole);

    printf("\nVettore ordinato \n");

    for(i=0;i<NELEM;i++){
        //visualizza il vettore ordinato
        printf("Parola di indice %d: %s \n ",i+1,parole[i]);
    }
    
    return 0;
}

//procedura che riordina il vettore attraverso il buuble sort
void bubble(char VETT[][L_MAX]){
    int i;
    char provv[L_MAX];
    bool inordine = 0;

    while(!inordine){
        inordine = 1;
        for(i=0;i<NELEM -1;i++){
            if(strcmp(VETT[i],VETT[i+1]) > 0){
                strcpy(provv,VETT[i]);
                strcpy(VETT[i],VETT[i+1]);
                strcpy(VETT[i+1],provv);
                inordine = 0;
            }
        }
    }


};