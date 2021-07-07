/// Mostre na tela somente quando
/// quando o valor de (valorMaior[i] + valorMenor[j]) for par

/// Saida A soma valorMaior[i] =XX + valorMenor[j]  

#include <stdio.h>
#include <stdlib.h>

 int main(void){  // executa e mostra na tela

    int i, j, valorMaior[4], valorMenor[4], multiplicacao, soma;
    
    valorMaior[0] = 12;
    valorMaior[1] = 3;
    valorMaior[2] = 5;
    valorMaior[3] = 56;
    
    
    valorMenor[0] = 1;
    valorMenor[1] = 0;
    valorMenor[2] = 1;
    valorMenor[3] = 2;

      for(i=0;i<4;i++){
      	 for(j=0;j<4;j++){
      	 	
			   /// if(i == j){
			    ///multiplicacao = (valorMaior[i] * valorMenor[j]); 
			    soma = (valorMaior[i] + valorMenor[j]);
			       if(soma % 2 ==0){
			    
					
    	    ///printf("valor[%d]= %d:: valor[%d]= %d \n",i,valorMaior[i],j,valorMaior[j]); /// conta para mostrar o valor IGUAL
    	    ///printf("multiplicacao valorMaior[%d]= %d * valorMenor[%d]= %d || %d \n",i,valorMaior[i],j,valorMenor[j], multiplicacao); /// conta para mostra o valor IGUAL + MULTIPLICACAO
               printf("valorMaior[%d]= %d + valorMenor[%d]= %d eh par \n",i,valorMaior[i],j,valorMenor[j], soma);
    	   } 
         }
      }
 
    system("pause"); /// para o sistema

        return(0); /// enter
}
