/*
Realizzare un programma che legge da tastiera una sequenza di 10 numeri interi e li salva in un vettore. 
Successivamente li riordina dal più piccolo al più grande senza uso di altre strutture dati, e infine li visualizza.
*/

#include<stdlib.h>
#include<stdio.h>


static int N;

//procedura ordinamento
void riordina(int INPUT[]);

int main(){
    const int MAXINPUT = 30;
    int INPUT[MAXINPUT];
    int i,MIN;

    do{
        printf("Inserisci il numero di valori che vuoi inserire (1-30)\n");
        scanf("%d",&N);
        if(N <= 0 || N > MAXINPUT)
            printf("valore inserito non valido\n");
    }while(N <= 0 || N > MAXINPUT);

    for(i=0;i<N;i++){
        printf("Inserisci valore n° %d \n",i+1);
        scanf("%d",&INPUT[i]);
    }

    //riordina il vettore
    riordina(INPUT);

    printf("Vettore riordinato\n");
    
    for(i=0;i<N;i++){
        printf("%d \n",INPUT[i]);
    }
    return 0;
}

void riordina(int INPUT[]){
    int j,i,min,ind;
    for(i=0;i<=N;i++){
        min=INPUT[i];
        ind = i;
        for(j=i+1;j<N;j++){
            if(INPUT[j]<min){
                min = INPUT[j];
                ind = j;
            }
        }
        INPUT[ind] = INPUT[i];
        INPUT[i] = min;  
    }
}