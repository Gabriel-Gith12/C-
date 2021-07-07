/// Implemente um algoritimo que receba 10 velores
/// mostre os valores que sao Pares e Some os valores
/// que sao imapares

#include <stdio.h>
#include <stdlib.h>

int main(void){ // executa e mostra na tela


    int i,j,somaimpar,valor[10]; // declaração de variaveis

// laço para digitar 10 valores - Start
    
   for(i = 0;i < 10; i++){
     printf("Digite os valor[%d]\n",i);
     scanf("%d",&valor[i] ); 
     
 	  }
 	  
// laço para digitar 10 valores - End 	  
 	  
// laço para mostar Valores Pares e Soma Impar - Start 

 	for(j = 0;j < 10; j++){
 	 	if(valor[j] % 2 ==0){  // verificao de Valores Pares
     		printf("Valores Pares[%d] = %d \n",j,valor[j] );
        }else{
	    somaimpar = (somaimpar + valor[j]);
             printf("Soma dos Imapares %d : %d \n", somaimpar);
        }

 	}
 	  
// laço para mostrar os Valores Parese Soma Impar - End


    
   system("pause"); /// para o sistema

   return(0); /// enter

}
