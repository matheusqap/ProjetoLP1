#include "../include/tarefa.h"

TarefaBase::TarefaBase(const std::string& titulo, const std::string& descricao, Prioridade prioridade, const std::string& dataCriacao, const std::string& dataVencimento)
    : titulo(titulo), descricao(descricao), prioridade(prioridade), dataCriacao(dataCriacao), dataVencimento(dataVencimento), status("A fazer") {}

TarefaBase::~TarefaBase() {}

void TarefaBase::exibir() const {
    std::cout << "Título: " << titulo << std::endl;
    std::cout << "Descrição: " << descricao << std::endl;
    std::cout << "Prioridade: " << static_cast<int>(prioridade) << std::endl;
    std::cout << "Data de criação: " << dataCriacao << std::endl;
    std::cout << "Data de vencimento: " << dataVencimento << std::endl;
    std::cout << "Status: " << status << std::endl;
}

void TarefaBase::definirPrioridade(Prioridade novaPrioridade) {
    prioridade = novaPrioridade;
}

void TarefaBase::definirDataVencimento(const std::string& novaDataVencimento) {
    dataVencimento = novaDataVencimento;
}

void TarefaBase::definirStatus(const std::string& novoStatus) {
    status = novoStatus;
}

std::ostream& operator<<(std::ostream& os, const TarefaBase& tarefa) {
    os << "Título: " << tarefa.titulo << std::endl;
    os << "Descrição: " << tarefa.descricao << std::endl;
    os << "Prioridade: " << static_cast<int>(tarefa.prioridade) << std::endl;
    os << "Data de criação: " << tarefa.dataCriacao << std::endl;
    os << "Data de vencimento: " << tarefa.dataVencimento << std::endl;
    os << "Status: " << tarefa.status << std::endl;
    return os;
}

Tarefa::Tarefa(const std::string& titulo, const std::string& descricao, Prioridade prioridade, const std::string& dataCriacao)
    : TarefaBase(titulo, descricao, prioridade, dataCriacao, ""), dataVencimento("") {}  
   
Tarefa::~Tarefa() {}

void Tarefa::exibir() const {
    std::cout << "----- Tarefa -----" << std::endl;
    TarefaBase::exibir();
    std::cout << "------------------" << std::endl;
}

void Tarefa::definirPrioridade(Prioridade novaPrioridade) {
    TarefaBase::definirPrioridade(novaPrioridade);
}

void Tarefa::definirDataVencimento(const std::string& novaDataVencimento) {
    TarefaBase::definirDataVencimento(novaDataVencimento);
}

void Tarefa::definirStatus(const std::string& novoStatus) {
    TarefaBase::definirStatus(novoStatus);
}

std::ostream& operator<<(std::ostream& os, const Tarefa& tarefa) {
    os << static_cast<const TarefaBase&>(tarefa);
    return os;
}
