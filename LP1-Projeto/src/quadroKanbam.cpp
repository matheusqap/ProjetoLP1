#include "../include/quadroKanbam.h"

QuadroKanbam::QuadroKanbam() {
    colunas.push_back(new AFazer()); // Adiciona a coluna "A Fazer" ao quadro
    colunas.push_back(new EmAndamento()); // Adiciona a coluna "Em Andamento" ao quadro
    colunas.push_back(new Aprovacao()); // Adiciona a coluna "Aprovação" ao quadro
    colunas.push_back(new Feito()); // Adiciona a coluna "Feito" ao quadro
}

QuadroKanbam::~QuadroKanbam() {
    for (auto coluna : colunas) {
        delete coluna; // Libera a memória alocada para as colunas
    }
}

void QuadroKanbam::adicionarTarefa(Coluna* coluna, Tarefa* tarefa) {
    coluna->adicionarTarefa(tarefa); // Chama o método adicionarTarefa() da coluna específica
}

void QuadroKanbam::imprimir() const {
    for (const auto& coluna : colunas) {
        coluna->imprimir(); // Chama o método imprimir() de cada coluna do quadro
        coluna->imprimirOrdenadoPorComplexidade(); // Chama o método imprimir() de cada coluna do quadro ordenado 
    }
}
