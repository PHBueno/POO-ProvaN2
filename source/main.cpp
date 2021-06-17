#include "../headers/Fornecedor.hpp"
#include "../headers/Empregado.hpp"
#include "../headers/Administrador.hpp"
#include <iostream>
int main(void)
{
    // Fornecedor f("Pedro", "123456", "Rua 2");

    // f.setValorCredito(123.6);
    // f.setValorDivida(65.4);
    // cout << "nome: " << f.getNome() << endl;
    // cout << "Saldo: R$" << f.obterSaldo() << endl;

    // Empregado e;

    // e.setNome("João");
    // e.setTelefone("1234521");
    // e.setSalarioBase(1500);
    // e.setCodSetor(1);
    // e.setImposto(4.3);

    // cout << "Salário: R$" << e.calcularSalario() << endl;

    Administrador a;
    a.setAjudaDeCusto(12000.32);
    a.setImposto(43);
    a.setSalarioBase(4000.43);

    cout << "Salário do administrador: R$" << a.calcularSalario() << endl;
    
}