#ifndef QUADRO_TAREFAS_HPP
#define QUADRO_TAREFAS_HPP

#include <list>
#include "../include/tarefa.h"

class QuadroTarefasBase {
protected:
    std::list<TarefaBase*> tarefasAFazer;
    std::list<TarefaBase*> tarefasEmAndamento;
    std::list<TarefaBase*> tarefasConcluidas;

public:
    virtual void adicionarTarefa(TarefaBase* tarefa);
    virtual void exibirTarefas() const;

    virtual ~QuadroTarefasBase() {}
};

class QuadroTarefas : public QuadroTarefasBase {
public:
    using QuadroTarefasBase::QuadroTarefasBase;

    void adicionarTarefa(TarefaBase* tarefa) override;
    void exibirTarefas() const override;
};

#endif
