/// Implemente um algoritimo que transforme
/// metros (m) em centimetros(c)

#include <stdio.h>
#include <stdlib.h>

int main(void){ // executa e mostra na tela
    
    float metros, centimetros ; 
    
    printf("metros \n"); 
    scanf("%f",&metros);
    
   centimetros = (metros*100);
    
    printf(" Valor em centimetros eh %f \n",centimetros);
 
	   system("pause"); /// para o sistema  
       
       return(0);
       
      }
