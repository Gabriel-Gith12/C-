/// Implemente um algoritimo que mostre na tela 10 posicoes de um vetor

#include <stdio.h>
#include <stdlib.h>

int main(void){  

    int i, valor[10];

    for(i = 0;i < 10; i++){
     printf("digite o valor no vetor valor [%d]\n",i); 
     scanf("%d",&valor[i] );
	}
	
	    for(i = 0;i < 10; i++){
     printf("digite o valor no vetor valor [%d] = %d \n",i,valor[i] ); 

	}
    
   //valor = 12;
   
   // printf("%d \n",valor);
    
   system("pause"); /// para o sistema

   return(0); /// enter

}



