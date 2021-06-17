#include "Empregado.hpp"
#include <iostream>
using namespace std;

#ifndef Administrador_hpp
#define Administrador_hpp

class Administrador : public Empregado
{
    public:
        Administrador(){};
        void setAjudaDeCusto(float ajudaDeCusto);
        
        float calcularSalario();
        float getAjudaDeCusto();
    private:
        float ajudaDeCusto;
};

#endif