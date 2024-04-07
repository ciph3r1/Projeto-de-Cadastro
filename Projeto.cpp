#include <iostream>
using namespace std;

    int main()
    {
       double senha;
       
       cout<<"Para acessar ao sistema, digite a senha de acesso:\n"<<endl;
       cin>>senha;
       
       if(senha == 2024121867 || senha == 2024121325 || senha == 2024121227)
       {
            string nome, endereço, cpf;
            int tipo;
            int dia,mes,ano;
            
            cout<<"\nLogin efetuado com sucesso"<<endl;
            cout<<"Seja bem vindo ao Cadastro de Funcionários"<<endl;
            cout<<"Será necessário realizar um novo registro\n\n"<<endl;
            
            cout<<"Informe o seu nome completo:"<<endl;
             cin>>nome;
            cout<<"Informe o CPF do funcionario a ser registrado:"<<endl;
             cin>>cpf;
            cout<<"Informe o seu Endereço completo:"<<endl;
             cin>>endereço;
            cout<<"Informe o tipo de Funcionario ao qual voce foi cadastrado, digite 1 para efetivo, 2 para temporario e 3 para estagiario: "<<endl;
             cin>>tipo;
            cout<<"Digite a data de admissão:"<<endl;
             cin>>dia>>mes>>ano;
       }
        return 0;
    }
    
