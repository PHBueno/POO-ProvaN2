#include "Empregado.hpp"
#include <iostream>
using namespace std;

#ifndef Administrador_hpp
#define Administrador_hpp

class Administrador : public Empregado
{
    public:
        Administrador(string nome, string telefone, string  endereco, int codSetor, float salarioBase, float imposto, float ajudaDeCusto) : Empregado(nome, telefone, endereco, codSetor, salarioBase, imposto)
        {
            this->ajudaDeCusto = ajudaDeCusto;
        };
        void setAjudaDeCusto(float ajudaDeCusto);
        void imprime();
        
        float calcularSalario();
        float getAjudaDeCusto();
    private:
        float ajudaDeCusto;
};

#endif