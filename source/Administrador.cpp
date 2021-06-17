#include "../headers/Administrador.hpp"
#include <iostream>
using namespace std;

void Administrador::setAjudaDeCusto(float ajudaDeCusto)
{
    this->ajudaDeCusto = ajudaDeCusto;
}

// Redeclaração do método calcularSalario da Classe Empregado!
float Administrador::calcularSalario()
{
    return (salarioBase - (salarioBase * (imposto/100))) + ajudaDeCusto;
}

float Administrador::getAjudaDeCusto()
{
    return this->ajudaDeCusto;
}