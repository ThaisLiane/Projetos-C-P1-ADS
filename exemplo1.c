#include <stdio.h>
/* 
Obter notas dos alunos
Calcular média
Verificar se foi aprovado ou reprovado
Se a média for >= 7, aprovado
Se não, reprovado
  */
int main() {
  //Declaração de variáveis
   float nota1, nota2, media;
   char nome[10];

  // Obter nome do aluno
  printf("Digite o nome do aluno: ");
  scanf("%s", nome);
  printf("Ola, %s", nome);

  // Obter as notas
  printf("\nDigite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  
// Calcular media
  media = (nota1 + nota2)/2;

  printf("Media: %.2f\n", media);
  
   //Verificar se o aluno foi aprovado ou não
  if(media >= 7){
    printf("Aprovado!");
  }
  else if(media >=4){
    printf("Prova Final");
  }
  else{
    printf("Reprovado! Tente em outra vida");
  }
      
  return 0;
}
