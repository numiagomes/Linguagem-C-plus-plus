/*Uma empresa precisa cadastrar alguns dados de seus funcionários e fazer alguns cálculos.
O primeiro requisito é o preeenchimento de informações do funcionário. Para isso, implemente uma coleta de informações, para os seguintes dados:
nome, cpf, nacionalidade, identidade, pais, estado, cidade, rua, número e salário. OK! (verificar pq o nome e complemento não aceita espaço)
Uma vez que as informações foram fornecidas, verifique se o funcionário é do Braisl. Caso seja, imprima um texto com essa informação
para o funcionário do RH.OK! (resolver bug de leitura dos numeros em cpf e identidade)
Faça o cálculo do desconto em folha, devido ao INSS, segundo a tabela abaixo:
 Salário (R$)              Desconto
 até 1693,72                 8%
 de 1693,72 até 2822,90      9%
 acima de 2.822,91           11% ok!
 Imprima todos os dados do funcionário. Verifique qual será o cargo na carteira de trabalho do funcionário
 Level 1 - salário até 1500 - estágiario
 Leval 2 -  de 1501 a 2000 - dev junior
 level 3 - de 2001 a 4000 - dev pleno
 level 4 - de 4001 a 7000 - dev sênior
 leval 5 - de 7001 a 1000 - GP 
 Level 6 -  de 10001 a 1500 - GP sênior
 Level 7 - de 15001 a 30000 - diretor de ti
 level 8 - 30001 a 50000 - diretor de ti sênior
 level 9 - 50001 a 100000 - Presidente*/


#include <iostream>

using namespace std;

float cadastro (string nome, double cpf, string nacionalidade, int identidade,string pais, string estado, string cidade, string rua, int numero, string complemento, double salario, string proximo, double desconto){
    while (proximo != "não"){
   cout << " Preencha as informações refente ao funcionário.""\n" "Nome completo:""\n";
    getline (cin,nome);
    cin.ignore();
    cout << "CPF (somente os números):""\n";
    cin >> cpf;
    cout << "Nacionalidade:";
    getline (cin, nacionalidade);
    cin.ignore();
    cout << "Indentidade:""\n";
    cin >> identidade;
    cout << "Endereço completo""\n""País:""\n";
    getline (cin,pais);
    cin.ignore();
    cout << "Estado:""\n";
    getline (cin,estado);
    cout << "Cidade:""\n";
    getline (cin,cidade);
    cout << "Rua:""\n";
    getline (cin,rua);
    cin.ignore();
    cout << "Número:""\n";
    cin >> numero;
    cout << "Complemento:""\n";
    getline (cin,complemento);
    cin.ignore();
    cout << "Salário:""\n";
    cin >> salario;
    cout << "Deseja cadastrar outro funcinário? ( sim ou não)""\n";
    cin >> proximo;
    }
 if ( pais == "Brasil"){
        cout << "Este funcionário é residente do " <<pais<<"\n";
 }
 if (salario <= 1693.72 && pais == "Brasil"){
            desconto = (salario * 0.08);
 }
 else if (salario > 1693.72 && salario <= 2822.90 && pais == "Brasil"){
                desconto = (salario * 0.09);
 }
 else if ( salario > 2822.90 && pais == "Brasil"){
                desconto = (salario * 0.11);
 }
 else {desconto = 0;
      }
 cout << "O funcionário " << nome<< " que possui CPF "<< cpf<< " e identidade "<< identidade<<"."<< nacionalidade<< " residente no seguinte endereço rua "<<rua<<", "<< 
 numero<<", "<<complemento<<", "<<cidade<<", "<<estado<<", "<<pais<<"\n" "Tem salário " << salario<< " e seu desconto em folha para o INSS será: "<< desconto;

 if (salario <= 1500){
     cout<< " Este funcionário é classificado como estágiario";
 }
 else if (salario > 1501 && salario <= 2000){
      cout<< " Este funcionário é classificado como desenvolvedor junior";
 }
 else if(salario > 2001 && salario <= 4000){
      cout<< " Este funcionário é classificado como desenvolvedor pleno";
 }
  else if(salario > 4001 && salario <= 7000){
      cout<< " Este funcionário é classificado como desenvolvedor sênior";
 }
   else if(salario > 7001 && salario <= 10000){
      cout<< " Este funcionário é classificado como gerente de projetos";
 }
   else if(salario > 10001 && salario <= 15000){
      cout<< " Este funcionário é classificado como gerente de projetos sênior";
 }
    else if(salario > 15001 && salario <= 30000){
      cout<< " Este funcionário é classificado como diretor de TI";
 }
     else if(salario > 30001 && salario <= 50000){
      cout<< " Este funcionário é classificado como diretor de TI sênor";
 }
 else {cout<< " Este é o Presidente da empresa";
     
 }
    return 0;
}

int main(){ 
    string nome ="";
    double cpf = 0;
    string nacionalidade = "";
    int identidade = 0;
    string pais =""; 
    string estado ="";
    string cidade ="";
    string rua = "";
    int numero = 0; 
    string complemento ="";
    double salario = 0;
    string proximo = "";
    double desconto = 0;
    return cadastro (nome, cpf, nacionalidade, identidade, pais, estado, cidade, rua, numero, complemento, salario, proximo, desconto);
}


