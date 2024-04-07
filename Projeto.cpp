#include <iostream>
#include <locale.h> //Utilizar acentos no código.
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    string senhaCorreta1 = "2024121227";
    string senhaCorreta2 = "2024121325";
    string senhaCorreta3 = "2024121867";
    string senhaDigitada;

    cout << "Digite a senha para acessar o sistema: ";
    cin >> senhaDigitada;

    if (senhaDigitada != senhaCorreta1 && senhaDigitada != senhaCorreta2 && senhaDigitada != senhaCorreta3) {
        cout << "Senha incorreta. Acesso negado." << endl;
        return 1;
    } else {
        cout << "Senha correta. Acesso permitido." << endl;
        cout << "Seja bem-vindo ao Cadastro de Funcionários" << endl;
        cout << "Será necessário realizar um novo registro" << endl;
    }

    string nome, endereco, cpf, DT_admissao;
    double slr_base;
    int tp_func, hr_extra, dias_trabalhados;

    cout << "Digite o nome do funcionário: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Digite o endereço do funcionário: ";
    getline(cin, endereco);

    cout << "Digite o CPF do funcionário: ";
    getline(cin, cpf);

    cout << "Digite a data de admissão do funcionário: ";
    getline(cin, DT_admissao);

    cout << "Digite o tipo do funcionário (1 - Efetivo, 2 - Temporário, 3 - Estagiário): ";
    cin >> tp_func;
    cin.ignore();
    
    switch (tp_func) {
        case 1: {
            cout << "Digite o salário base do funcionário: ";
            cin >> slr_base;

            cout << "Digite a quantidade de horas extras trabalhadas: ";
            cin >> hr_extra;

            double slr_efetivo = slr_base + (hr_extra * slr_base * 1.5);
            double descontoInss_IR = slr_efetivo * 0.8;

            cout << "Nome: " << nome << endl;
            cout << "Endereço: " << endereco << endl;
            cout << "CPF: " << cpf << endl;
            cout << "Data de admissão: " << DT_admissao << endl;
            cout << "Salário base: " << slr_base << endl;
            cout << "Horas extras: " << hr_extra << endl;
            cout << "Salário líquido: " << descontoInss_IR << endl;
            cin.ignore();
            }
            break;
            case 2: {
            cout << "Digite o salário base do funcionário: ";
            cin >> slr_base;

            cout << "Digite a quantidade de dias trabalhados: ";
            cin >> dias_trabalhados;

            
            double slr_temp = slr_base * dias_trabalhados * 0.8;

            
            cout << "Nome: " << nome << endl;
            cout << "Endereço: " << endereco << endl;
            cout << "CPF: " << cpf << endl;
            cout << "Data de admissão: " << DT_admissao << endl;
            cout << "Salário base: " << slr_base << endl;
            cout << "Dias trabalhados: " << dias_trabalhados << endl;
            cout << "Salário líquido: " << slr_temp << endl;
            cin.ignore();
            }break;
            case 3: {
            double slr_estagiario = 800.0;

            
            cout << "Nome: " << nome << endl;
            cout << "Endereço: " << endereco << endl;
            cout << "CPF: " << cpf << endl;
            cout << "Data de admissão: " << DT_admissao << endl;
            cout << "Salário fixo: " << slr_estagiario << endl;
            cin.ignore();
            }break;

        default:
            cout << "Tipo de funcionário inválido!" << endl;
            break;
    }

    return 0;
}
