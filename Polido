#include <iostream>
#include <locale.h> //Utilizar acentos no código.
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    string senhaCorreta1 = "2024121227";
    string senhaCorreta2 = "2024121325";
    string senhaCorreta3 = "2024121867";
    string senhaDigitada;

    cout << "Digite a senha para acessar o sistema:\n"<<endl;
    cin >> senhaDigitada;

    if (senhaDigitada != senhaCorreta1 && senhaDigitada != senhaCorreta2 && senhaDigitada != senhaCorreta3) {
        cout << "\n=================================" << endl;
        cout << "\nSenha incorreta. Acesso negado." << endl;
        return 1;
    } else {
        cout << "\n=================================" << endl;
        cout << "\nSenha correta. Acesso permitido." << endl;
        cout << "Seja bem-vindo ao Cadastro de Funcionários" << endl;
        cout << "Será necessário realizar um novo registro" << endl;
    }

    string nome, endereco, cpf, DT_admissao;
    double slr_base;
    int tp_func, hr_extra, dias_trabalhados;
    
    cout << "\n=================================" << endl;
    cout << "\nDigite o nome do funcionário: " << endl;
    cin.ignore();
    getline(cin, nome);

    cout << "\nDigite o endereço do funcionário: " << endl;
    getline(cin, endereco);

    cout << "\nDigite o CPF do funcionário: " << endl;
    getline(cin, cpf);

    cout << "\nDigite a data de admissão do funcionário: " << endl;
    getline(cin, DT_admissao);

    cout << "\nDigite o tipo do funcionário (1 - Efetivo, 2 - Temporário, 3 - Estagiário): " << endl;
    cin >> tp_func;
    cin.ignore();
    
    switch (tp_func) {
        case 1: {
            cout << "\nDigite o salário base do funcionário: ";
            cin >> slr_base;

            cout << "Digite a quantidade de horas extras trabalhadas: ";
            cin >> hr_extra;

            double slr_efetivo = slr_base + (hr_extra * slr_base * 1.5);
            double descontoInss_IR = slr_efetivo * 0.8;
            
            cout << "\n=================================" << endl << endl;

            cout << "Nome: " << nome << endl;
            cout << "Endereço: " << endereco << endl;
            cout << "CPF: " << cpf << endl;
            cout << "Data de admissão: " << DT_admissao << endl;
            cout << "Salário base: " << slr_base << endl;
            cout << "Horas extras: " << hr_extra << endl;
            cout << "Salário líquido: " << descontoInss_IR << endl;
            cin.ignore();
            
            cout << "\n=================================" << endl;
            
            }
            break;
            case 2: {
                
            cout << "\nDigite o salário base do funcionário: ";
            cin >> slr_base;

            cout << "Digite a quantidade de dias trabalhados: ";
            cin >> dias_trabalhados;

            
            double slr_temp = slr_base * dias_trabalhados * 0.8;
            
            cout << "\n=================================" << endl << endl;
            
            cout << "Nome: " << nome << endl;
            cout << "Endereço: " << endereco << endl;
            cout << "CPF: " << cpf << endl;
            cout << "Data de admissão: " << DT_admissao << endl;
            cout << "Salário base: " << slr_base << endl;
            cout << "Dias trabalhados: " << dias_trabalhados << endl;
            cout << "Salário líquido: " << slr_temp << endl;
            cin.ignore();
            
            cout << "\n=================================" << endl;
            }
            break;
            case 3: 
            {
            double slr_estagiario = 800.0;

            cout << "\n=================================" << endl << endl;
            cout << "Nome: " << nome << endl;
            cout << "Endereço: " << endereco << endl;
            cout << "CPF: " << cpf << endl;
            cout << "Data de admissão: " << DT_admissao << endl;
            cout << "Salário fixo: " << slr_estagiario << endl;
            cin.ignore();
            
            cout << "\n=================================" << endl;
            
            }
            break;
            default:
            cout << "\n=================================" << endl << endl;
            cout << "Tipo de funcionário inválido!" << endl;
            break;
    }

    return 0;
}
