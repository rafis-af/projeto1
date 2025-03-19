#include "projeto.h"
#include <stdio.h>

int criarTarefa(ListaDeTarefas *lt){

    if(lt -> qtd >= TOTAL_TAREFAS)
    return 1;

        Tarefa *t = &lt -> tarefas[lt -> qtd];

    printf("Entre com a prioridade da tarefa: ");
    scanf("%d", &t -> prioridade);

    printf("Entre com a categoria da tarefa: ");
    scanf("%s", t -> categoria);

    printf("Entre com a descricao da tarefa: ");
    scanf("%s", t -> descricao);

    lt -> qtd++;

    return 0;
}

int deletarTarefa(ListaDeTarefas *lt){
    
    if(lt -> qtd == 0)
    return 1;

    int pos;
    printf("Entre com a posicao que deseja deletar: ");
    scanf("%d", &pos);

    if(pos < 0 || pos > lt -> qtd -1)
    return 2;
    
    for(; pos < lt -> qtd -1; pos++){

        lt -> tarefas[pos].prioridade = tarefas[pos+1].prioridade;
        strcpy(lt -> tarefas[pos].descricao, lt -> tarefas[pos+1].descricao);
        strcpy(lt -> tarefas[pos].categoria, lt -> tarefas[pos+1].categoria);
    }
    lt -> qtd--;

    return 0;

}

int listarTarefas(ListaDeTarefas *lt){

    if(lt -> qtd == 0);
    return 1;

    int i;
    for(i = 0; i < lt > qtd; i++){
        printf("Pos: %d \t Prioridade: %d \t Categoria: %s\n", i , lt -> tarefas)
    }

    return 0;
}

int carregarTarefas(ListaDeTarefas *lt, char *nomeArquivo){

    FILE *fp=fopen(nome, "rb");
    if(fp == NULL)
    return 1;  

    fread(lt, sizeof(ListaDeTarefas), 1, fp);
    fpclose(fp);
    return 0;
}

int salvarTarefas(ListaDeTarefas *lt, char *nomeArquivo){
    
    FILE *fp=fopen(nome, "wb");
    if(fp == NULL)
    return 1;  

    fread(lt, sizeof(ListaDeTarefas), 1, fp);
    fpclose(fp);
    return 0;
}

void exibeMenu(){
    printf("Menu\n");

}

