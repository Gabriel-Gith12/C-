/// Implemente um algoritmo que mostre o valor o imc
/// colando como entrada altura e peso
/// indicando a classificacao
/// formula do imc IMC = Peso ÷ (Altura × Altura)

#include <stdio.h>
#include <stdlib.h>

int main(void){ // executa e motra na tela
   
   float imc, peso, altura; 

   printf("altura \n");
   scanf("%f",&altura);
   
   printf("peso \n");
   scanf("%f",&peso);
   
   imc = peso/ (altura*altura);
   
      if(imc <= 18){
   printf("Magreza eh %f \n", imc);

   }else if(imc >= 18 && imc <= 25){
   printf("NORMAL eh  %f \n", imc);
   
   }else if(imc >= 25 && imc <= 30){
   printf("SOBREPESO eh  %f \n", imc);
   
   }else if(imc >= 30 && imc <= 40){
   printf("OBESIDADE eh  %f \n", imc);
   
   }else if(imc >= 40){
   	printf("OBESIDADE GRAVE eh  %f \n", imc);
   	
   	}
   
   system("pause"); /// para o sistema

   return(0);
}
