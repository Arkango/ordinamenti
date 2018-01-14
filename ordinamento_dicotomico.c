/* Questa ricerca permette di ridurre di molto il tmepo di esecuzione
del programma nel caso si voglio fare una ricerca su una mole di dati molto grande
, però è necessario prima riordinare il vettore per poi poter applicare questo tipo di ricerca
*/

// Author : Arcangelo Saracino
// Date : 14.01.2018

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

#define NELEM 10

int trovato(int vett[],int elemento, int *p_posiz, int n_dati);
void bubble(int vett[],int n);

int main(){
    int num_dati, dato, indice = 0, p_posiz, cercato;
    int vett[NELEM];

    printf("Introduci il vettore, premi <ctrl>+z per finire\n");
    while(scanf("%d",&dato) != EOF && indice<NELEM){
        vett[indice]=dato;
        indice ++;
    }

    num_dati = indice;

    bubble(vett,num_dati);

    printf("\nVettore ordinato \n");

    for(indice=0;indice<NELEM;indice++){
        //visualizza il vettore ordinato
        printf("Elemento di indice %d: %d \n ",indice+1,vett[indice]);
    }

    printf("Inserisce il valore da cercare\n");
    scanf("%d",&cercato);

    if(trovato(vett,cercato,&p_posiz,num_dati))
        printf("\nDato trovato in posizione %d",p_posiz);
    else
        printf("\n Dato non presente");



    return 0;
}

//procedura che riordina il vettore attraverso il buuble sort
void bubble(int VETT[],int num_dati){
    int i,provv;
    bool inordine = 0;

    while(!inordine){
        inordine = 1;
        for(i=0;i<num_dati -1;i++){
            if(VETT[i]>VETT[i+1]){
                provv = VETT[i];
                VETT[i]= VETT[i+1];
                VETT[i+1] = provv;
                inordine = 0;
            }
        }
    }
};

int trovato(int vett[],int dato, int *p_posiz,int n_dati){
    int meta,limite_inf,limite_sup;
    int presente;

    limite_inf = 0;
    limite_sup = n_dati-1;

    presente = 0;

    while(!presente && limite_inf <= limite_sup){
        meta  = (limite_inf + limite_sup)/2;
        if(vett[meta] == dato){
            presente = 1;
        }else{
            if(vett[meta] > dato)
                limite_sup = meta -1;
            else
                limite_inf = meta +1;
        }
    }
    *p_posiz=meta;
    return(presente); 
}