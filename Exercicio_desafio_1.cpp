/*Uma empresa precisa cadastrar alguns dados de seus funcionários e fazer alguns cálculos.
O primeiro requisito é o preeenchimento de informações do funcionário. Para isso, implemente uma coleta de informações, para os seguintes dados:
nome, cpf, nacionalidade, identidade, pais, estado, cidade, rua, número e salário. OK!
Uma vez que as informações foram fornecidas, verifique se o funcionário é do Braisl. Caso seja, imprima um texto com essa informação
para o funcionário do RH.
Faça o cálculo do desconto em folha, devido ao INSS, segundo a tabela abaixo:
 Salário (R$)              Desconto
 até 1693,72                 8%
 de 1693,72 até 2822,90      9%
 acima de 2.822,91           11% 
 Imprima todos os dados do funcionário. Verifique será o cargo na carteira de trabalho do funcionário
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

float cadastro (string nome, int cpf, string nacionalidade, int identidade,string pais, string estado, string cidade, string rua, int numero, string complemento, double salario, string proximo){
    while (proximo != "não"){
    cout << " Preencha as informações refente ao funcionário.""\n" "Nome completo:""\n";
    cin >> nome;
    cout << "CPF (somente os números):""\n";
    cin >> cpf;
    cout << "Nacionalidade:.""\n";
    cin >> nacionalidade;
    cout << "Indentidade:""\n";
    cin >> identidade;
    cout << "Endereço completo""\n""País:""\n";
    cin >> pais;
    cout << "Estado:""\n";
    cin >> estado;
    cout << "Cidade:""\n";
    cin >> cidade;
    cout << "Rua:""\n";
    cin >> rua;
    cout << "Número:""\n";
    cin >> numero;
    cout << "Complemento:""\n";
    cin >> complemento;
    cout << "Salário:""\n";
    cin >> salario;
    cout << "Deseja cadastrar outro funcinário? ( sim ou não)""\n";
    cin >> proximo;
        
    }
     if ( pais == "Brasil"){
        cout << "Este funcionário é residente do " <<pais;
    }
    return 0;
}
int main(){ 
    string nome ="";
    int cpf = 0;
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
    return cadastro (nome, cpf, nacionalidade, identidade, pais, estado, cidade, rua, numero, complemento, salario, proximo);
}
