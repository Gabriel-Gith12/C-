///IMPLEMENTE UM ALGORITIMO QUE CALCULE O VOLUME
/// DE UM CAIXA
/// PASSADO DIMENSOES DE 
/// altura , largura e comprimento

#include <stdio.h>
#include <stdlib.h>

int main(void){ // executa e mostra na tela
    
    float altura, largura, comprimento, volume ; 
    
    printf("Entre com a altura em cm \n"); 
    scanf("%f",&altura);
    
    printf("Entre com a largura em cm \n");
    scanf("%f",&largura);
    
    printf("Entre com a comprimento em cm \n");
    scanf("%f",&comprimento);
    
    volume = (altura * largura * comprimento);
    
    printf(" O VOLUME eh %f \n",volume);
 
	   system("pause"); /// para o sistema  
       
       return(0);
       
      }
