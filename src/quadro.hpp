#include "../include/quadro.h"
#include <iostream>

void QuadroTarefasBase::adicionarTarefa(TarefaBase* tarefa) {
    // Implementação do método adicionarTarefa()
    tarefasAFazer.push_back(tarefa);
}

void QuadroTarefasBase::exibirTarefas() const {
    // Implementação do método exibirTarefas()
    std::cout << "----- Tarefas a fazer -----" << std::endl;
    for (const auto& tarefa : tarefasAFazer) {
        tarefa->exibir();
    }
    std::cout << "----------------------------" << std::endl;
}

void QuadroTarefas::adicionarTarefa(TarefaBase* tarefa) {
    // Implementação do método adicionarTarefa() sobrescrito
    QuadroTarefasBase::adicionarTarefa(tarefa);
}

void QuadroTarefas::exibirTarefas() const {
    // Implementação do método exibirTarefas() sobrescrito
    QuadroTarefasBase::exibirTarefas();
}
