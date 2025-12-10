#include <cstdio>
#include<cstring>
#include<locale.h>
#include<stdlib.h>

int main (void) {
	
	float peso , alt , IMC; 
	
	printf ("Digite o valor do seu peso:");
	scanf("%f", &peso);
	
	printf ("Digite sua altura:");
	scanf("%f", &alt);
	
	IMC= peso / (alt * alt);
	
	if (IMC < 18.5){
		
		printf("Abaixo do peso: %.2f\n", IMC);
	}
	
	else if  (IMC  >= 18.4 && IMC<=24.8 ){
		printf("Saudavel: %.2f\n" , IMC);
	}
	
	else if (IMC  >= 24.9 && IMC<=29.8){
		printf("Peso em excesso: %.2f\n" , IMC);
	}
	
	 else if (IMC >= 29.9 && IMC<=34.8 ){
		printf("Obsidade grau I: %.2f\n", IMC);
	}
	
	 else if (IMC >= 34.9 && IMC<=39.8){
		printf("Obsidade grau II: %.2f\n" , IMC);		
	}
	
	 else  {	 (IMC > 39.9);
		printf("Obsidade grau III: %.2f\n" , IMC);
	}
	
	system ("pause");
    return 0; 
}
