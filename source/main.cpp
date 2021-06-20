#include "../headers/Gerencia.hpp"
#include <iostream>

int main(void)
{
    int opcao;
    Gerencia gerencia;

    do
    {
       cout << endl << " =-=-=-=-=-=-=-= SISTEMA DE GERENCIAMENTO DE FUNCIONARIOS =-=-=-=-=-=-=-= " << endl;
       cout << endl << "0. Sair" << endl << "1. Inserir Pessoa" << endl << "2. Atualizar Pessoa" << endl << "3. Relatório" << endl;
       cout << endl << "Digite sua Opção: ";
       cin >> opcao;
       cout << endl;
       
       switch (opcao)
       {
        case 0: // sair
            cout << "Até Mais :)" << endl;
            break;
        case 1:
        {
            system("clear");
            int criacao;
            cout << endl << "========== DADOS PARA A INSERÇÃO ==========" << endl;
            // Informações básicas para a criação de qualquer objeto, independente da Classe;
            string nome, endereco, telefone;
            cout << "Informe o Nome: ";
            cin.ignore();
            getline(cin,nome);

            cout << "Informe o Endereco: ";
            getline(cin,endereco);
            
            cout << "Informe o Telefone: ";
            getline(cin,telefone);

            cout << endl << "========== CARGO ==========" << endl;
            cout << "1. Vendedor" << endl << "2. Operário" << endl << "3. Administrador" << endl << "4. Fornecedor" << endl;
            cout << endl <<"Informe o Cargo: ";
            cin >> criacao;
            cout << endl;
            int codSetor;
            float salarioBruto, imposto;
            if(criacao == 1 or criacao == 2 or criacao == 3 )
            {
                cout << "Informe o código do Setor: ";
                cin >> codSetor;
                cout << "Informe o Salário Bruto: R$";
                cin >> salarioBruto;
                cout << "Informe a porcentagem dos impostos: ";
                cin >> imposto;
            }

            switch (criacao)
            {
                case 1: // vendedor
                {
                    float valorVenda, comissao;
                    cout << "Informe o valor por venda: R$";
                    cin >> valorVenda;
                    cout << "Informe o valor da comissão: R$";
                    cin >> comissao;
                    gerencia.insereVendedor(nome, telefone, endereco, codSetor, salarioBruto, imposto, valorVenda, comissao);
                    break;
                }
                case 2: // operário
                {
                    float valorProducao, comissao;
                    cout << "Informe o valor da produção: R$";
                    cin >> valorProducao;
                    cout << "Informe o valor da comissão: R$";
                    cin >> comissao;
                    gerencia.insereOperario(nome, telefone, endereco, codSetor, salarioBruto, imposto, valorProducao, comissao);
                    break;
                }
                case 3: // administrador
                {
                    float ajudaDeCusto;
                    cout << "Informe a ajuda de custo: R$";
                    cin >> ajudaDeCusto;
                    gerencia.insereAdministrador(nome, telefone, endereco, codSetor, salarioBruto, imposto, ajudaDeCusto);
                    break;
                }
                case 4: // fornecedor
                {
                    float valorCredito, valorDivida;
                    cout << "Informe o Crédito: R$";
                    cin >> valorCredito;
                    cout << "Informe a Dívida: R$";
                    cin >> valorDivida;
                    gerencia.insereFornecedor(nome, telefone, endereco, valorCredito, valorDivida);
                    break;
                }
                default:
                    cout << "Cargo não disponível, tente novamente" << endl;
                    break;
            }
            system("clear");
            break;
        }

        case 2: // Atualizar
        {
            system("clear");
            int atualizar;
            cout << endl << "======= ATUALIZAR =======" << endl;
            cout << "1. Nome" << endl << "2. Endereço" << endl << "3. Telefone" << endl;
            cout << "Informe o que deseja atualizar: ";
            cin >> atualizar;

            int cargo;
            cout << endl << "======= CARGO =======" << endl;
            cout << "1. Fornecedor" << endl << "2. Administrador" << endl << "3. Vendedor" << endl << "4. Operario" << endl;
            cout << "Informe o Cargo de quem deseja atualizar: ";
            cin >> cargo;

            if(atualizar == 1)
            {
                string nome, novoNome;
                cout << "Informe o nome atual: ";
                cin.ignore();
                getline(cin,nome);
                cout << "Informe o NOVO nome: ";
                getline(cin, novoNome);

                gerencia.atualizaNome(cargo, nome, novoNome);
            }
            else if(atualizar == 2)
            {
                string nome, novoEndereco;
                cout << "Informe o nome: ";
                cin.ignore();
                getline(cin,nome);
                cout << "Informe o NOVO endereco: ";
                getline(cin, novoEndereco);

                gerencia.atualizaEndereco(cargo, nome, novoEndereco);
            }
            else if(atualizar == 3)
            {
                string nome, novoTelefone;
                cout << "Informe o nome: ";
                cin.ignore();
                getline(cin,nome);
                cout << "Informe o NOVO telefone: ";
                getline(cin, novoTelefone);

                gerencia.atualizaTelefone(cargo, nome, novoTelefone);
            }
            system("clear");
            break;

        }

        case 3: // Relatorio
        {
            system("clear");
            gerencia.relatorio();
        }
       
        default:
            break;
       }
    } while (opcao != 0);
    
    // Fornecedor f("Pedro", "123456", "Rua 2");

    // f.setValorCredito(123.6);
    // f.setValorDivida(65.4);
    // cout << "nome: " << f.getNome() << endl;
    // cout << "Saldo: R$" << f.obterSaldo() << endl;

    // Empregado e("Pedro", "1111111", "Rua 1", 2, 3000, 12);

    // cout << "Nome: " << e.getNome() << endl;
    // cout << "Salário: R$" << e.calcularSalario() << endl;
    // cout << "telefone: " << e.getTelefone() << endl;
    // cout << "Endereço: " << e.getEndereco() << endl;
    // cout << "Cod Set: " << e.getCodSetor() << endl;
    // cout << "Salario Base: " << e.getSalarioBase() << endl;
    // cout << "Imposto: " << e.getImposto() << "%" << endl;

    // Administrador a;
    // a.setAjudaDeCusto(12000.32);
    // a.setImposto(43);
    // a.setSalarioBase(4000.43);

    // cout << "Salário do administrador: R$" << a.calcularSalario() << endl;

    // Operario o("Pedro", "111111", "Rua 5", 4, 4500, 23, 2000, 5.6);

    // cout << "Nome: " << o.getNome() << endl;
    // cout << "Salário: R$" << o.calcularSalario() << endl;
    // cout << "telefone: " << o.getTelefone() << endl;
    // cout << "Endereço: " << o.getEndereco() << endl;
    // cout << "Cod Set: " << o.getCodSetor() << endl;
    // cout << "Salario Base: " << o.getSalarioBase() << endl;
    // cout << "Imposto: " << o.getImposto() << "%" << endl;

    // Vendedor v("Pedro", "111111", "Rua 5", 4, 4500, 23, 2000, 5.6);
    // cout << "Nome: " << v.getNome() << endl;
    // cout << "Salário: R$" << v.calcularSalario() << endl;
    // cout << "telefone: " << v.getTelefone() << endl;
    // cout << "Endereço: " << v.getEndereco() << endl;
    // cout << "Cod Set: " << v.getCodSetor() << endl;
    // cout << "Salario Base: " << v.getSalarioBase() << endl;
    // cout << "Imposto: " << v.getImposto() << "%" << endl;

    // Gerencia g;

    // g.insereFornecedor("Pedro", "11111", "Rua josé gavião", 3000, 1500);
    // g.insereFornecedor("João", "22222", "Rua josé gavião 2", 5000, 1300);
    // g.insereFornecedor("Fernanda", "33333", "Rua josé gavião 3", 3000, 1500);
    // g.insereFornecedor("Valdira", "44444", "Rua josé gavião 4", 3000, 1500);

    // g.insereAdministrador("Marcos", "000000", "Rua josé", 1, 8900, 34, 3800);

    // g.insereVendedor("Pedro", "111111", "Rua 5", 4, 4500, 23, 2000, 5.6);

    // g.relatorio();


}