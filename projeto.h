#define TOTAL_TAREFAS 100

typedef struct {

    char descricao[300];
    char categoria[100];
    int prioridade;

} Tarefa;

typedef struct {

    Tarefa tarefas[TOTAL_TAREFAS];
    int qtd;

} ListaDeTarefas;

int criarTarefa(ListaDeTarefas *lt);
int deletarTarefa(ListaDeTarefas *lt);
int listarTarefas(ListaDeTarefas *lt);

int carregarTarefas(ListaDeTarefas *lt, char *nomeArquivo);
int salvarTarefas(ListaDeTarefas *lt, char *nomeArquivo);

void exibeMenu();

