#ifndef TAREFA_HPP
#define TAREFA_HPP

#include <string>
#include <iostream>

enum class Prioridade {
    Alta,
    Média,
    Baixa
};

class TarefaBase {
protected:
    std::string titulo;
    std::string descricao;
    Prioridade prioridade;
    std::string dataCriacao;
    std::string dataVencimento;
    std::string status;

public:
    TarefaBase(const std::string& titulo, const std::string& descricao, Prioridade prioridade, const std::string& dataCriacao, const std::string& dataVencimento);
    virtual ~TarefaBase();

    virtual void exibir() const;
    virtual void definirPrioridade(Prioridade novaPrioridade);
    virtual void definirDataVencimento(const std::string& novaDataVencimento);
    virtual void definirStatus(const std::string& novoStatus);

    friend std::ostream& operator<<(std::ostream& os, const TarefaBase& tarefa);
};

class Tarefa : public TarefaBase {
protected:
    std::string dataVencimento; // Adicionado o membro dataVencimento

public:
    using TarefaBase::TarefaBase;

    Tarefa(const std::string& titulo, const std::string& descricao, Prioridade prioridade, const std::string& dataCriacao);
    ~Tarefa();

    void exibir() const override;
    void definirPrioridade(Prioridade novaPrioridade) override;
    void definirDataVencimento(const std::string& novaDataVencimento) override;
    void definirStatus(const std::string& novoStatus) override;

    friend std::ostream& operator<<(std::ostream& os, const Tarefa& tarefa);
};

#endif
