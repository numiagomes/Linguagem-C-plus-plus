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

//Exercíco 8
#include <iostream>

using namespace std;

int main()
{int cruzeiro [6] = {2,2,2,2,2,2};
int atletico [6] = {3,3,3,3,3,3};
int america [6] = {4,2,3,0,0,0};
int resultado_cru, resultado_atl, resultado_ame;
resultado_cru =0; resultado_atl =0; resultado_ame = 0;
int num_partida = 6;
int contador = 0;
while (contador<num_partida){
    resultado_cru + cruzeiro[contador];
    resultado_atl = resultado_atl+atletico[contador];
    resultado_ame = resultado_ame + america[contador];
    contador++;// o proprio contador +1
    }
    std::cout << resultado_ame << std::endl;// é mesma coisa do cout sozinho, só que fazendo referencia ao "pacote de onde ele vem"
    std::cout << resultado_atl << std::endl;
    std::cout << resultado_cru << std::endl;
}


//exercício 17
int main (){
    int numeros [5] = {3,5,6,8,9};
    int max = numeros[0];
    int contador = 1;
    int tamanho_numeros = 5;
    int posicao = 0;
    while ( contador < tamanho_numeros){
        if (numeros [contador]> max){
            max = numeros [contador];
            posicao = contador;
        }
        contador ++;
    }
    std::cout << posicao << std::endl;
}


//exercício 16
int main (){
    int numeros [5] = {3,5,6,8,9};
    int max = numeros[0];
    int contador = 1;
    int tamanho_numeros = 5;
    while ( contador < tamanho_numeros){
        if (numeros [contador]> max){
            max = numeros;
        }
        contador ++;
    }
    std::cout << max << std::endl;
}
