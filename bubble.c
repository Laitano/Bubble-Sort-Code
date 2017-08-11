// .c

#include "bubble.h"

void bubble (int vetor[] ){


int i;
int j;
int aux;

for(i=0;i<6;i++){
        for (j=i+1;j<6;j++){
            
            if (vetor[i]>vetor[j]){

                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
                                   }// Do primeiro if


                         }// Do primeiro for de [0,5]
                         }// Do segundo for de [1,6]
                        

            
            



                
} 

