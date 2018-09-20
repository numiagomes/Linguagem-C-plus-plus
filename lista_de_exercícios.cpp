//exercício 9
#include <iostream>

using namespace std;

int main() {
    int var = 0;
    int controle=0;
    int num_iteracoes = 20;
    for (controle = 0; controle<num_iteracoes;controle++){
        var = var+2;
    }
    cout<<var;}
//exercício 14
#include <iostream>

using namespace std;

string total_avioes(int num_pessoas, int num_avioes){
    int num_lugares = 10* num_avioes;
    if (num_lugares>= num_pessoas){
    return "Todos passageiros foram alocados";}
    else {cout <<"Faltaram "<< num_pessoas - num_lugares;}
    return "Acontece overbooking";
}
 int main(){
     int num_pessoas = 100;
     int num_avioes = 10;
     cout <<total_avioes(num_pessoas,num_avioes);
}
//exercício 15
#include <iostream>

using namespace std;

int main(){
    int num_atendimentos = 20;
    int posicao_fila = 68;
    int num_hrs_espera;
    num_hrs_espera = posicao_fila/ num_atendimentos;
    cout << num_hrs_espera;
}
