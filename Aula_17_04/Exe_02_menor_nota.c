#include <stdio.h>
#define TAM 5

int main(){

float alunos[TAM], maior, menor;
int i;

    for(i=0;i<TAM;i++){
        printf("Informe a nota do aluno(%d):\n",i);
        scanf("%f",&alunos[i]);

        
        maior = alunos[0];
        menor = alunos[0];

        if(alunos[i]<menor){
            menor = alunos[i];
        }

        if(alunos[i]>maior){
            maior = alunos[i];
        }

        
    }

    printf("Menor nota:%.1f\n",menor);
    printf("Maior nota: %.1f",maior);


    return 0;
}