# Kanban Board em C++

Este projeto implementa um Kanban Board simples em C++. O Kanban Board é uma ferramenta visual usada para gerenciar o fluxo de trabalho e acompanhar o progresso das tarefas. Ele é composto por colunas que representam os estágios do processo e as tarefas são movidas de uma coluna para outra conforme são concluídas.

## Funcionalidades

- O Kanban Board é composto por quatro colunas principais:
  - **A Fazer**: Tarefas que estão na fila para serem realizadas.
  - **Em Andamento**: Tarefas que estão em progresso.
  - **Aprovação**: Tarefas concluídas que estão aguardando aprovação.
  - **Feito**: Tarefas concluídas e aprovadas.

- O usuário pode adicionar novas tarefas ao quadro Kanban. Cada tarefa possui um nome e pode ser adicionada a uma coluna específica.

- As tarefas são representadas pela classe `Tarefa` e podem ser estendidas para tipos de tarefas específicas, se necessário. No exemplo fornecido, é criada a classe `TarefaExemplo` como uma implementação de exemplo.

## Estrutura do Código

- O código está modularizado em vários arquivos `.cpp` e `.h` para facilitar a organização e reutilização.

- A classe `QuadroKanbam` representa o quadro Kanban e contém as colunas e as operações relacionadas a ele.

- A classe `Coluna` é uma classe abstrata que define a estrutura básica de uma coluna no quadro Kanban. Ela possui um vetor de tarefas e métodos para adicionar e imprimir as tarefas.

- As classes `AFazer`, `EmAndamento`, `Aprovacao` e `Feito` são classes derivadas de `Coluna` e implementam os métodos específicos para adicionar tarefas às suas respectivas colunas.

- 
 No exemplo, é fornecida a classe `TarefaExemplo` como uma implementação de exemplo com nome e descrição da tarefa.

