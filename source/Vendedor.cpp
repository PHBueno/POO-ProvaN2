#include "../headers/Vendedor.hpp"
#include <iostream>
using namespace std;

void Vendedor::setValorVenda(float valorVenda)
{
    this->valorVenda = valorVenda;
}

void Vendedor::setComissao(float comissao)
{
    this->comissao = comissao;
}

void Vendedor::imprime()
{
    Empregado::imprime(); // Imprime infos padrões de um Empregado
    cout << "Valor Venda: R$" << valorVenda << endl;
    cout << "Comissão: R$" << comissao << endl;
    cout << "Salário Líquido: R$" << calcularSalario() << endl;
}

float Vendedor::calculaSalario()
{
    float pct_vend = (comissao/100) * valorVenda;

    return (salarioBase - (salarioBase * (imposto/100))) + pct_vend;
}

float Vendedor::getComissao()
{
    return comissao;
}

float Vendedor::getValorVenda()
{
    return valorVenda;
}