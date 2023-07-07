#include "../include/tarefa.h"
#include <iostream>

Tarefa::Tarefa(const std::string& nome, int complexidade) : nome(nome), complexidade(complexidade) {} // Inicializa o nome da tarefa

Tarefa::~Tarefa() {} // Destrutor vazio

TarefaExemplo::TarefaExemplo(const std::string& nome, int complexidade, const std::string& descricao)
    : Tarefa(nome, complexidade), descricao(descricao) {} // Inicializa o nome e a descrição da tarefa

void TarefaExemplo::imprimir() const {
    std::cout << "Nome: " << nome << ", Descrição: " << descricao << std::endl; // Imprime o nome e a descrição da tarefa
}

int TarefaExemplo::getComplexidade() const{
    return complexidade; //Retorna a complexidade da tarefa
}

std::string TarefaExemplo::getNome() const {
    return nome; // Retorna o nome da tarefa
}

