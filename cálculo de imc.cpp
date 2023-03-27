#include <stdio.h>

/* 
Obter a altura
Obter o peso
Verificar a classificação
*/
int main() {
	float altura, peso, IMC;
	
	printf("Informe a altura: ");
	scanf("%f" , &altura);
	
	printf("Informe o peso: ");
	scanf("%f" , &peso);
	
	altura = altura * altura;
	IMC = peso / altura;
	
	printf("IMC: %.2f" , IMC);
	if(IMC<= 18.5 ){
		printf("\nMagreza");
	}
	else if(IMC>=18.6 && IMC<=24.9){
		printf("\nNormal");
	}
	else if(IMC >= 25 && IMC <= 29.9){
		printf("\nSobrepeso");
	}
	else if(IMC>= 30 && IMC<= 39.9){
		printf("\nObesidade");
	}
	else{
		printf("\nObesidade grave");
	}
		
	return 0;
}
