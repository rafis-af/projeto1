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
    
    printf("Deletar Tarefa\n");
    return 0;

}

int listarTarefas(ListaDeTarefas *lt){

    printf("Listar Tarefa\n");
    return 0;
}

int carregarTarefas(ListaDeTarefas *lt, char *nomeArquivo){

    return 0;
}

int salvarTarefas(ListaDeTarefas *lt, char *nomeArquivo){
    
    return 0;
}

void exibeMenu(){
    printf("Menu\n");

}

