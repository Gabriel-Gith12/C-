/// Implemente um algoritimo que mostre na tela 10 posicoes de um vetor

#include <stdio.h>
#include <stdlib.h>

int main(void){  


    int i, valor[10];
    
    valor [0] = 23;
    valor [1] = 2;
    valor [2] = 1;
    valor [3] = 5;
    valor [4] = 15;
    valor [5] = 9;
    valor [6] = 50;
    valor [7] = 38;
    valor [8] = 8;
    valor [9] = 19;
    
    for(i = 0;i < 10; i++){
     printf("digite o valor no vetor valor [%d]\n",i); 
     scanf("%d",&valor[i] );
	}
	
    
   //valor = 12;
   
   // printf("%d \n",valor);
    
   system("pause"); /// para o sistema

   return(0); /// enter

}
