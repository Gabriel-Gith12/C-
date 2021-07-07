/// Implemente um sistema que receba 
/// um valor inteiro de 10 numeros
/// e retorne por meio de funcao de tabuada
/// e termine com a letra X para finalizar o processo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// Declar as funcoes.

int tabuada(int A, int B);

int main(void){  /// Executa e mostra na Tela.

    int  num1, j, N; 
    char sair[10]; 

    printf("Digite um numero entre [1 e 10]. \n");
    scanf("%s",&sair);  ///Sempre o valor que ele recebe é String.
     
    num1 = atoi(sair);  /// Converte string para int, assim após podera chamar a Função.
     
/// Chamada da Função - Start      
     
    if(strcmp(sair,"X")==0){  
    	
    return(0);
    }else{ 
	
    for (j=0; j<=10; j++){	
  	    N = tabuada(num1 , j);     
	    printf("tabuada do %d * %d = [%d] \n", num1, j, N); 
	 }
	main();
   }
}

/// Chamada da Função - End  

/// Função da Tabuada - Star

int tabuada(int num1, int j){
	
	
	int resultado;
	resultado = (num1 * j );	
	return resultado;

}

/// Função da Tabuada - End
