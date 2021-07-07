#include <stdio.h>
#include <stdlib.h>

/// Declar as funcoes

int somaDoisNumeros(int A, int B);

int main(void){ // executa e motra na tela

   int N, num1, num2;

   printf("Digite o 1. numero: \n");
   scanf("%d",&num1);
   
   printf("Digite o 2. numero: \n");
   scanf("%d",&num2);
  
	N = somaDoisNumeros(num1, num2);	/// chama funcao    

   printf("O valor da soma eh %d \n", N);

 system("pause"); /// para o sistema
 
 return(0);

}

/// funcao de soma

int somaDoisNumeros(int num1, int num2){
	
	int resultado;
	resultado = (num1 + num2);	
	return resultado;

}

