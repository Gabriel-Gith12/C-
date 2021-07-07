/// Implemente um algoritmo que receba (entrada) 6 valores
/// e mostre na tela os valores maiores que o valor 4(quatro)

#include <stdio.h>
#include <stdlib.h>


int main(void){  // executa e mostra na tela

    int i, valor[6]; 
 

 // laco para digitar 6 posicoes - Start

   for(i = 0;i < 6; i++){

     printf("Digite o valor no vetor valor[%d]\n",i);

     scanf("%d",&valor[i] ); 

 	  }

// laco para digitar 6 posicoes - End

// laco para mortar apenas maior que 4 no valor - Start 	  

 	 for(i = 0;i < 6; i++){

 	 	 if(valor[i] > 4){ // verificao do valor maior que 4

			

     		printf("O valor do vetor maior[%d] = %d \n",i,valor[i] );

     }      

 	  }

// laco para mortar apenas maior que 4 no valor - End 

   system("pause"); /// para o sistema

   return(0); /// enter

}
