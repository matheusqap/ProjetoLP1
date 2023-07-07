#ifndef COLUNA_H
#define COLUNA_H

#include <iostream>
#include <vector>
#include "tarefa.h"

class Coluna {
protected:
    std::string nome; // Nome da coluna
    std::vector<Tarefa*> tarefas; // Vetor de ponteiros para as tarefas presentes na coluna

public:
    Coluna(const std::string& nome); // Construtor da classe Coluna
    virtual ~Coluna(); // Destrutor
    virtual void adicionarTarefa(Tarefa* tarefa) = 0; // Método virtual para adicionar uma tarefa à coluna
    virtual void imprimir() const; // Método para imprimir as tarefas da coluna
    void ordenarTarefasPorComplexidade() const; // Método para ordenar as tarefas por complexidade
    void ordenarTarefasPorNome() const; // Método para ordenar as tarefas por nome
    virtual void imprimirOrdenadoPorComplexidade() const; // Método para imprimir as tarefas ordenadas por complexidade
    virtual void imprimirOrdenadoPorNome() const; // Método para imprimir as tarefas ordenadas por nome
    std::string getNome() const; // Método para obter o nome da coluna
    void moverTarefa(Tarefa* tarefa, Coluna* colunaDestino); // Método para mover uma tarefa para outra coluna
};

class AFazer : public Coluna {
public:
    AFazer(); // Construtor da classe 
    void adicionarTarefa(Tarefa* tarefa) override; // Implementação do método adicionarTarefa 
};

class EmAndamento : public Coluna {
public:
    EmAndamento(); // Construtor da classe 
    void adicionarTarefa(Tarefa* tarefa) override; // Implementação do método adicionarTarefa 
};

class Aprovacao : public Coluna {
public:
    Aprovacao(); // Construtor da classe Aprovacao
    void adicionarTarefa(Tarefa* tarefa) override; // Implementação do método adicionarTarefa 
};

class Feito : public Coluna {
public:
    Feito(); // Construtor da classe Feito
    void adicionarTarefa(Tarefa* tarefa) override; // Implementação do método adicionarTarefa 
};

#endif // COLUNA_H
