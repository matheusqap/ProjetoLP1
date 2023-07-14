/**
@file main.cpp
@brief Arquivo que contém a implementação das funções da classe abstrata 'Tarefa' e da classe herdeira 'TarefaExemplo'.
@author Matheus Queiroz de Almeida Pereira 20220055380
@author Pedro Henrique Bastos Viana 20220042382
 */

#include "../include/tarefa.h"
#include <iostream>

Tarefa::Tarefa(const std::string& nome, int complexidade) : nome(nome), complexidade(complexidade) {} // Inicializa o nome da tarefa

Tarefa::~Tarefa() {} // Destrutor vazio

TarefaExemplo::TarefaExemplo(const std::string& nome, int complexidade, const std::string& descricao)
    : Tarefa(nome, complexidade), descricao(descricao) {} // Inicializa o nome e a descrição da tarefa

void TarefaExemplo::imprimir() const {
    std::cout << "Nome: " << nome << ", Descrição: " << descricao << ", Complexidade: " << complexidade << std::endl; // Imprime o nome e a descrição da tarefa
}

int TarefaExemplo::getComplexidade() const{
    return complexidade; //Retorna a complexidade da tarefa
}

std::string TarefaExemplo::getNome() const {
    return nome; // Retorna o nome da tarefa
}

