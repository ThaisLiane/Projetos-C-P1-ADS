#include <stdio.h>

int main() {
	int idade1;
	
	printf("Informe a idade: ");
	scanf("%d" , &idade1);
	
	if(idade1 >= 18){
		printf("Maior de idade");
	}
	else{
		printf("Menor de idade");
	}
	
	return 0;
}
