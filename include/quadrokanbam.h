/**
@file main.cpp
@brief Arquivo que contém a implementação da classe 'QuadroKanbam'. Neste arquivo estão apenas as assinaturas dos seu métodos.
@author Matheus Queiroz de Almeida Pereira 20220055380
@author Pedro Henrique Bastos Viana 20220042382
 */

#ifndef QUADRO_KANBAM_H
#define QUADRO_KANBAM_H

#include <vector>
#include "coluna.h"

class QuadroKanbam {

private:
    std::vector<Coluna*> colunas; // Vetor de colunas do quadro

public:
    QuadroKanbam(); // Construtor
    ~QuadroKanbam(); // Destrutor

    void adicionarTarefa(Coluna* coluna, Tarefa* tarefa); // Adiciona uma tarefa a uma coluna do quadro
    void imprimir() const; // Imprime o quadro Kanban

};

#endif // QUADRO_KANBAM_H
