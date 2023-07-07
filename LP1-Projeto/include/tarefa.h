#ifndef TAREFA_H
#define TAREFA_H

#include <string>

class Tarefa {

protected:
    std::string nome; // Nome da tarefa
    int complexidade; // Nova variável para definir a complexidade da tarefa

public:
    Tarefa(const std::string& nome, int complexidade); // Construtor
    virtual ~Tarefa(); // Destrutor
    virtual void imprimir() const = 0; // Imprime a tarefa
    virtual int getComplexidade() const = 0; //Método para obter a complexidade
    virtual std::string getNome() const = 0; // Adicione a declaração do método getNome()

};

class TarefaExemplo : public Tarefa {

private:
    std::string descricao; // Descrição da tarefa

public:
    TarefaExemplo(const std::string& nome, int complexidade, const std::string& descricao); // Construtor
    void imprimir() const override; // Imprime o nome e a descrição da tarefa
    int getComplexidade() const override; // Obtém o valor da complexidade
    std::string getNome() const override; // Obtém o nome  

};

#endif // TAREFA_H
