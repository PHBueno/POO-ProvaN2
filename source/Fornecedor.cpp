#include "../headers/Fornecedor.hpp"

#include <iostream>
using namespace std;


void Fornecedor::setValorCredito(float valorCredito)
{
    this->valorCredito = valorCredito;
}

void Fornecedor::setValorDivida(float valorDivida)
{
    this->valorDivida = valorDivida;
}

void Fornecedor::imprime()
{
    Pessoa::imprime();
    cout << "Saldo: R$" << obterSaldo() << endl;
} 

float Fornecedor::obterSaldo()
{
    return (valorCredito - valorDivida);
}