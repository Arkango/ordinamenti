/*
Realizzare un programma che legge da tastiera una sequenza di 10 numeri interi e li salva in un vettore. 
Successivamente li riordina dal più piccolo al più grande senza uso di altre strutture dati, e infine li visualizza.
*/

#include<stdlib.h>
#include<stdio.h>

int main(){
    const int MAXINPUT = 30;
    int INPUT[MAXINPUT];
    int i,N;

    do{
        printf("Inserisci il numero di valori che vuoi inserire (1-30)\n");
        scanf("%d",&N);
        if(N <= 0 || N > MAXINPUT)
            printf("valore inserito non valido");
    }while(N <= 0 || N > MAXINPUT);

    for(i=0;i<N;i++){
        
    }

}