# Gerenciador de Tarefas Kanban

Este é um projeto, implementado em C++, que utilizada o método Kanban para criar um organizador de tarefas.

##Funcionalidades

- Adicionar uma tarefa ao quadro Kanban.
- Mover uma tarefa de um coluna do quadro para outra coluna do quadro Kanban.
- Obter as tarefas de acordo com seu 'status'.
- Imprimir o quadro com todas as tarefas.

##Classes e métodos

O projeto possui as seguintes classes e métodos:

###Classe Task

- Atributos: ID da tarefa, descrição, status, prioridade e data de vencimento.
- Métodos: getters e setters para os atributos da tarefa.

### Classe `KanbanBoard` (Quadro Kanban)

- Atributos: vetor de tarefas.
- Métodos:
  - `addTask`: adiciona uma nova tarefa ao quadro Kanban.
  - `setPriority`: define a prioridade de uma tarefa.
  - `setDueDate`: agenda a data de vencimento de uma tarefa.
  - `sortTasks`: classifica as tarefas com base em critérios, usando algoritmos de ordenação.
  - `printBoard`: imprime o quadro Kanban com as tarefas em cada coluna.

### Classe `TaskComparator` (Comparador de Tarefas)

- Implementa um objeto de comparação personalizado para usar nos algoritmos de ordenação.
- Métodos: sobrecarga do operador `()` para comparar duas tarefas com base em critérios específicos.