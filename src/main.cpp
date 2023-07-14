/**
@file main.cpp
@brief Arquivo main que faz inserções no quadro kanban, insere as tarefas de acordo com o seu status.
@author Matheus Queiroz de Almeida Pereira 20220055380
@author Pedro Henrique Bastos Viana 20220042382
 */

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
    TarefaExemplo tarefa1("Tarefa A", 3, "Realizar testes");
    TarefaExemplo tarefa2("Tarefa B", 2, "Implementar funcionalidade X");
    TarefaExemplo tarefa3("Tarefa C", 1, "Corrigir bugs");
    TarefaExemplo tarefa4("Tarefa D", 4, "Criar documentação");
    TarefaExemplo tarefa5("Tarefa E", 2, "Implementar funcionalidade Y");
    TarefaExemplo tarefa6("Tarefa F", 3, "Realizar testes de integração");
    TarefaExemplo tarefa7("Tarefa G", 1, "Corrigir erros de usabilidade");
    TarefaExemplo tarefa8("Tarefa H", 4, "Criar relatório final");
    TarefaExemplo tarefa9("Tarefa I", 1, "Corrigir bugs críticos");
    TarefaExemplo tarefa10("Tarefa J", 3, "Implementar funcionalidade Z");
    TarefaExemplo tarefa11("Tarefa K", 2, "Refatorar código legado");

    // Adicionando as tarefas às colunas
    afazer.adicionarTarefa(&tarefa1);
    afazer.adicionarTarefa(&tarefa2);
    emAndamento.adicionarTarefa(&tarefa3);
    aprovacao.adicionarTarefa(&tarefa4);
    afazer.adicionarTarefa(&tarefa5);
    afazer.adicionarTarefa(&tarefa6);
    emAndamento.adicionarTarefa(&tarefa7);
    emAndamento.adicionarTarefa(&tarefa8);
    aprovacao.adicionarTarefa(&tarefa9);
    aprovacao.adicionarTarefa(&tarefa10);
    feito.adicionarTarefa(&tarefa11);

    std::cout << "=====================================================================================" << std::endl;
    std::cout << "\n";

    // Imprimindo o Quadro Kanban
    std::cout << "Impressão do Quadro Kanban" << std::endl;
    std::cout << "\n";
    
    std::cout << "=====================================================================================" << std::endl;

    std::cout << "\n";

    afazer.imprimir();
    emAndamento.imprimir();
    aprovacao.imprimir();
    feito.imprimir();

    std::cout << "=====================================================================================" << std::endl;

    std::cout << "\n";

    std::cout << "Impressão do Quadro Kanban ordenado pelo número de complexidade das tarefas" << std::endl;

    std::cout << "\n";

    std::cout << "=====================================================================================" << std::endl;

    std::cout << "\n";

    afazer.imprimirOrdenadoPorComplexidade();
    emAndamento.imprimirOrdenadoPorComplexidade();
    aprovacao.imprimirOrdenadoPorComplexidade();
    feito.imprimirOrdenadoPorComplexidade();

    std::cout << "=====================================================================================" << std::endl;
    std::cout << "\n";

    // Movendo tarefas entre colunas
    afazer.moverTarefa(&tarefa1, &emAndamento);
    emAndamento.moverTarefa(&tarefa3, &aprovacao);
    afazer.moverTarefa(&tarefa2, &feito);


    std::cout << "=====================================================================================" << std::endl;
    std::cout << "\n";

    // Imprimindo o Quadro Kanban após a movimentação

    std::cout << "Impressão do quadro Kanban após a movimentação das tarefas" << std::endl;
    std::cout << "\n";

    std::cout << "=====================================================================================" << std::endl;
    std::cout << "\n";

    afazer.imprimir();
    emAndamento.imprimir();
    aprovacao.imprimir();
    feito.imprimir();

    std::cout << "=====================================================================================" << std::endl;

    std::cout << "\n";

    std::cout << "Impressão do Quadro Kanban ordenado pela ordem alfabética do nome das tarefas" << std::endl;

    std::cout << "\n";

    std::cout << "=====================================================================================" << std::endl;

    std::cout << "\n";

    afazer.imprimirOrdenadoPorNome();
    emAndamento.imprimirOrdenadoPorNome();
    aprovacao.imprimirOrdenadoPorNome();
    feito.imprimirOrdenadoPorNome();

    std::cout << "=====================================================================================" << std::endl;

    std::cout << "\n";

    return 0;
}
