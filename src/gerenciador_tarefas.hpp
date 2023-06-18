#include "../include/gerenciador_tarefas.h"
#include <iostream>

void QuadroTarefasBase::adicionarTarefa(TarefaBase* tarefa) {
    tarefasAFazer.push_back(tarefa);
}

void QuadroTarefasBase::exibirTarefas() const {
    std::cout << "----- Tarefas a fazer -----" << std::endl;
    for (const auto& tarefa : tarefasAFazer) {
        tarefa->exibir();
    }
    std::cout << "----------------------------" << std::endl;
}

void QuadroTarefas::adicionarTarefa(TarefaBase* tarefa) {
    QuadroTarefasBase::adicionarTarefa(tarefa);
}

void QuadroTarefas::exibirTarefas() const {
    QuadroTarefasBase::exibirTarefas();
}
