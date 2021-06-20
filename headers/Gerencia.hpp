#include "Vendedor.hpp"
#include "Administrador.hpp"
#include "Fornecedor.hpp"
#include "Operario.hpp"

#include <vector>
#include <iostream>
using namespace std;

#ifndef Gerencia_hpp
#define Gerencia_hpp

class Gerencia
{
    public:
        Gerencia(){};

        void insereFornecedor(string nome, string telefone, string endereco, float valorCredito, float valorDivida);

        void insereAdministrador(string nome, string telefone, string  endereco, int codSetor, float salarioBase, float imposto, float ajudaDeCusto);

        void insereVendedor(string nome, string telefone, string endereco, int codSetor, float salarioBase, float imposto, float valorVenda, float comissao);

        void insereOperario(string nome, string telefone, string endereco, int codSetor, float salarioBase, float imposto, float valorProducao, float comissao);

        void atualizaNome(int cargo, string nome, string novoNome);
        void atualizaTelefone(int cargo, string nome, string telefone);
        void atualizaEndereco(int cargo, string nome, string endereco);

        void relatorio();
    
    private:
       vector <Fornecedor> fornecedores;
       vector <Administrador> administradores;
       vector <Vendedor> vendedores;
       vector <Operario> operarios;
     
};

#endif