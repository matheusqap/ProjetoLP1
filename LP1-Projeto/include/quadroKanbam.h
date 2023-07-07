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
