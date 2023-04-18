#include <stdio.h>
#define TAM 5

int main(){

float alunos[TAM], resposta=0;
int i,j;

for(i=0;i<TAM;i++){

printf("Informe a media do aluno(%d):\n",i);
scanf("%f",&alunos[i]);

resposta = resposta + alunos[i]; 
}

printf("Resposta: %.2f",resposta/TAM);

    return 0;
}