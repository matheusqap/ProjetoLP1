#include "../include/coluna.h"
#include <algorithm>

Coluna::Coluna(const std::string& nome) : nome(nome) {} // Inicializa o nome da coluna

Coluna::~Coluna() {} // Destrutor vazio

void Coluna::imprimir() const {
    std::cout << "Coluna: " << nome << std::endl;
    for (const auto& tarefa : tarefas) {
        tarefa->imprimir();
    }
    std::cout << std::endl;
}

//Ordenação a partir da complexidade através do algoritmo Bubble Sort 
void Coluna::ordenarTarefasPorComplexidade() const{
    int n = tarefas.size();
    std::vector<Tarefa*> tarefasOrdenadas = tarefas; // Cria uma cópia const do vetor original

    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (tarefasOrdenadas[j]->getComplexidade() > tarefasOrdenadas[j + 1]->getComplexidade()) {
                std::swap(tarefasOrdenadas[j], tarefasOrdenadas[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

//Ordenação a partir da complexidade através do algoritmo Insertion Sort 
void Coluna::ordenarTarefasPorNome() const{
    int n = tarefas.size();
    std::vector<Tarefa*> tarefasOrdenadas = tarefas; // Cria uma cópia const do vetor original

    for (int i = 1; i < n; i++) {
        Tarefa* chave = tarefasOrdenadas[i];
        int j = i - 1;
        while (j >= 0 && tarefasOrdenadas[j]->getNome() > chave->getNome()) {
            tarefasOrdenadas[j + 1] = tarefasOrdenadas[j];
            j = j - 1;
        }
        tarefasOrdenadas[j + 1] = chave;
    }
}


// Imprime ordenado através da complexidade
void Coluna::imprimirOrdenadoPorComplexidade() const {
    std::cout << "Coluna: " << nome << std::endl;
    ordenarTarefasPorComplexidade(); // Ordena as tarefas por complexidade
    for (const auto& tarefa : tarefas) {
        tarefa->imprimir();
    }
    std::cout << std::endl;
}

// Imprime ordenado por nome
void Coluna::imprimirOrdenadoPorNome() const {
    std::cout << "Coluna: " << nome << std::endl;
    ordenarTarefasPorNome(); // Ordena as tarefas por nome

    for (const auto& tarefa : tarefas) {
        tarefa->imprimir();
    }
    std::cout << std::endl;
}

std::string Coluna::getNome() const{
    return nome; // Retorna o nome da coluna
}

void Coluna::moverTarefa(Tarefa* tarefa, Coluna* colunaDestino){
    // Verifica se a tarefa está presente na coluna atual 
    auto it = std::find(tarefas.begin(), tarefas.end(), tarefa);
    if(it == tarefas.end()){
        std::cout << "A tarefa não está presente na coluna atual." << std::endl;
        return;
    }
    
    // Remova a tarefa da coluna atual 
    tarefas.erase(it);

    // Adiciona a tarefa à coluna destino
    colunaDestino->adicionarTarefa(tarefa);

    std::cout << "A tarefa foi movida com sucesso para a coluna " << colunaDestino->getNome() << "." << std::endl;
}



AFazer::AFazer() : Coluna("A Fazer") {} // Inicializa o nome da coluna "A Fazer"

void AFazer::adicionarTarefa(Tarefa* tarefa) {
    tarefas.push_back(tarefa); // Adiciona uma tarefa ao final do vetor de tarefas da coluna "A Fazer"
}

EmAndamento::EmAndamento() : Coluna("Em Andamento") {} // Inicializa o nome da coluna "Em Andamento"

void EmAndamento::adicionarTarefa(Tarefa* tarefa) {
    tarefas.push_back(tarefa); // Adiciona uma tarefa ao final do vetor de tarefas da coluna "Em Andamento"
}

Aprovacao::Aprovacao() : Coluna("Aprovação") {} // Inicializa o nome da coluna "Aprovação"

void Aprovacao::adicionarTarefa(Tarefa* tarefa) {
    tarefas.push_back(tarefa); // Adiciona uma tarefa ao final do vetor de tarefas da coluna "Aprovação"
}

Feito::Feito() : Coluna("Feito") {} // Inicializa o nome da coluna "Feito"

void Feito::adicionarTarefa(Tarefa* tarefa) {
    tarefas.push_back(tarefa); // Adiciona uma tarefa ao final do vetor de tarefas da coluna "Feito"
}
