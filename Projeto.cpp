#include <iostream>
using namespace std;

    int main()
    {
       double senha;
       
       cout<<"Para acessar ao sistema, digite a senha de acesso:\n"<<endl;
       cin>>senha;
       
       if(senha == 2024121867 || senha == 2024121325 || senha == 2024121227)
       {
            string nome, endereco, cpf;
            int tipo;
            int dia,mes,ano;
            
            cout<<"\nLogin efetuado com sucesso"<<endl;
            cout<<"Seja bem vindo ao Cadastro de Funcionários"<<endl;
            cout<<"Será necessário realizar um novo registro\n\n"<<endl;
            
            cout<<"Informe o seu nome completo:"<<endl;
             cin.ignore();
              getline(cin, nome);
            cout<<"\nInforme o CPF do funcionario a ser registrado:"<<endl;
             cin>>cpf;
            cout<<"\nInforme o seu Endereço completo:"<<endl;
             cin.ignore();
              getline(cin, endereco);
            cout<<"\nDigite a data de admissão:"<<endl;
             cin>>dia>>mes>>ano;
            cout<<"\nInforme o tipo de Funcionario ao qual voce foi cadastrado, digite 1 para efetivo, 2 para temporario e 3 para estagiario: "<<endl;
             cin>>tipo;
       }
       else 
       {
          cout<<"\nSenha Incorreta!"<<endl;
          cout<<"Nao sera possivel prosseguir com seu cadastro, tente novamente.";
       }
        return 0;
    }
    
