#ifndef QUADRO_TAREFAS_HPP
#define QUADRO_TAREFAS_HPP

#include <list>
#include "tarefa.h"

class QuadroTarefasBase {
protected:
    std::list<TarefaBase*> tarefasAFazer;
    std::list<TarefaBase*> tarefasEmAndamento;
    std::list<TarefaBase*> tarefasConcluidas;

public:
    // Métodos virtuais para polimorfismo
    virtual void adicionarTarefa(TarefaBase* tarefa);
    virtual void exibirTarefas() const;

    // Destrutor virtual para destruição adequada de objetos derivados
    virtual ~QuadroTarefasBase() {}
};

class QuadroTarefas : public QuadroTarefasBase {
public:
    using QuadroTarefasBase::QuadroTarefasBase;

    // Sobrescrita dos métodos virtuais
    void adicionarTarefa(TarefaBase* tarefa) override;
    void exibirTarefas() const override;
};

#endif
