#include <iostream>
#include "../include/coluna.h"
#include "../include/tarefa.h"

int main() {
    // Criação das colunas do Quadro Kanban
    AFazer afazer;
    EmAndamento emAndamento;
    Aprovacao aprovacao;
    Feito feito;

    // Criação de algumas tarefas de exemplo
    TarefaExemplo tarefa1("Tarefa 1", 3, "Realizar testes");
    TarefaExemplo tarefa2("Tarefa 2", 2, "Implementar funcionalidade X");
    TarefaExemplo tarefa3("Tarefa 3", 1, "Corrigir bugs");
    TarefaExemplo tarefa4("Tarefa 4", 4, "Criar documentação");

    // Adicionando as tarefas às colunas
    afazer.adicionarTarefa(&tarefa1);
    afazer.adicionarTarefa(&tarefa2);
    emAndamento.adicionarTarefa(&tarefa3);
    aprovacao.adicionarTarefa(&tarefa4);

    // Imprimindo o Quadro Kanban
    afazer.imprimir();
    emAndamento.imprimir();
    aprovacao.imprimir();
    feito.imprimir();

    // Movendo uma tarefa da coluna "A Fazer" para "Em Andamento"
    afazer.moverTarefa(&tarefa1, &emAndamento);

    // Imprimindo o Quadro Kanban após a movimentação
    afazer.imprimir();
    emAndamento.imprimir();
    aprovacao.imprimir();
    feito.imprimir();

    return 0;
}
