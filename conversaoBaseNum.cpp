/// Implemnete um sistema de conversão de bases numéricas. (utilizar switch)
/// O programa deverá apresentar uma tela de entrada com as seguintes opções:
/// Qual o valor que deseja converter: XXX

/// Digite as Conversão de Bases:

/// 1: Decimal para Hexadecimal
/// 2: Hexadecimal para Decimal
/// 3: Decimal para Octal
/// 4: Octal para Decimal
/// 5:  Sair do Sistema

/// obs o sistema fica em loop até digitar 5 " conversão de bases"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){ 
  int valor, conversao = 0; 
     
       printf("Qual a operacao que voce deseja executar? \n" );
       printf("\n1 - Decimal para Hexadecimal");
       printf("\n2 - Hexadecimal para Decimal");
       printf("\n3 - Decimal para Octal");
       printf("\n4 - Octal para Decimal");
       printf("\n5 - Sair do Sistema");
       
       printf("\nDigite uma das Opcao! \n"); 
       scanf("%d",&conversao); 

       printf("Qual o valor que deseja converter? \n");                       
       switch (conversao){        
        case 1: 
        scanf("%d", &valor); 
        printf("Valor Convertido eh %x \n", valor); 
        break; 
        case 2: 
        scanf("%x", &valor); 
        printf("Valor Convertido eh %d \n", valor); 
        break; 
        case 3: 
        scanf("%d", &valor); 
        printf("Valor Convertido eh %o \n", valor); 
        break; 
        case 4: 
        scanf("%o", &valor); 
        printf("Valor Convertido eh %d \n", valor); 
        break;
		 
}
        
	   	if(conversao ==5){
	   		printf("Sair do Sistema \n", valor);
    	    return(0); 
        }else{ 	
			main();
    }   
}
