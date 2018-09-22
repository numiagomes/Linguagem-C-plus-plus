
//Lista de Exercícios

/*Exercício 1 - Crie um programa em C++, que recebe uma palavra como parâmetro e imprime.*/
#include <iostream>

using namespace std;

int main()
{
    string palavra;
    std::cout << "Digite uma palavra" << std::endl;
    std::cin >> palavra;
    
    cout<<"Você digitou:"<< palavra;

    return 0;
}

/*Exercício 2 - Crie um programa em C++ que atribui o valor 20 para uma variável inteira, o valor
30 para outra variável inteira e some esses dois valores e armazene em outra variável.*/
#include <iostream>

using namespace std;

int main()
{
    int p_numero = 20;
    int s_numero = 30;
    int soma_numeros = p_numero + s_numero;
    cout << "A soma é: " << soma_numeros;
    
}

/*Exercício 3 - Crie um programa em C++ com uma variável do tipo String, contendo um nome qualquer.
Crie uma segunda variável do tipo Float, contendo o valor do salário dessa pessoa. Imprima:

A pessoa <Nome da Pessoa>, recebe R$<Salário da pessoa>.*/

#include <iostream>

using namespace std;

int main()
{
    string funcionario = "João";
    float salario = 2585.6;
    cout << "O funcionário " << funcionario << " recebe R$ " << salario;
    
}


/*Exercício 4 - Crie um programa em C++ que compara o valor do salário de duas pessoas, e informa
qual salário é maior.

Dica - Utilize a instrução if para fazer comparações e os operadores > ou < para comparar.*/

#include <iostream>

using namespace std;

int main()
{
    float salario_1;
    float salario_2;
    cout <<"Digite o primeiro salário" "\n";
    cin >> salario_1;
    cout << "Digite o segundo salário""\n";
    cin >> salario_2;
    if (salario_1 > salario_2){
        cout << "O maior salário é : "<< salario_1<< " e pertence ao primeiro funcionário inserido";
        
    }
    
        else if (salario_2> salario_1){
            cout << " O maior salário é "<< salario_2 << " e pertence ao segundo funcionário inserido";
            
        }
}


/*Exercício 5 - Crie um programa em C++ que recebe a pontuação de um usuário e a de outro usuário
e verifica quem ganhou o jogo, com base na maior pontuação.*/
#include <iostream>

using namespace std;

int main()
{
    int pontos_p1;
    int pontos_p2;
    cout << "Qual foi a pontuação do primeiro participante?""\n" ;
    cin >> pontos_p1;
    cout << "Qual foi a pontuação do segundo participante?""\n" ;
    cin >> pontos_p2;
    if (pontos_p1 > pontos_p2){
        cout << " O vencedor do jogo foi o participante 1, com " << pontos_p1 << " pontos.";
    }
        else if (pontos_p2 > pontos_p1){
           cout << " O vencedor do jogo foi o participante 2, com " << pontos_p1 << " pontos."; 
        }
        else{
            cout << "Os participantes terminaram o jogo empatados!";
        }
}

/*Exercício 6 - Crie um vetor de elementos do tipo inteiro e imprima o primeiro e o último elemento
desse vetor.*/
#include <iostream>

using namespace std;

int main()
{
    int numeros [7] = {2,5,6,8,4,2,9};
    cout << "O primeiro número declarado foi: " << numeros[0];
    cout <<  "\n""O último número declarado foi: " << numeros[6];
}

/*Exercício 7 - Crie um vetor de elementos do tipo float, insira valores nesses elementos e faça um
loop para imprimir cada um desses elementos.*/

/*Exercício 8 - Três times de futebol participaram de 6 partidas. Crie vetores para simular os resultados
desses jogos e imprima a pontuação obtida por cada time.*/
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

/*Exercício 9 - Cria um programa em C++ que possui uma variável inteira que se inicia com o valor 0.
Faça com que ela acumule o valor 2 nela mesma ao longo de 20 iterações.*/

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

/*Dica: Em um loop podemos fazer uma variável receber o valor dela mesma mais o valor que se deseja
acumular.*/

/*Exercício 10 - Pensando na mesma lógica do programa anterior, crie uma alteração no Exercício referente
aos times, para que seja feita a soma das pontuações de cada um.*/

/*Revisão de Função*/

/*Exercício 11 - Crie um programa que faz a leitura da nota final de um aluno e verifica se ele 
foi aprovado, reprovado ou se está de exame especial em uma disciplina. Os critérios que devem
ser considerados são: Nota acima de 70 indica aprovação, nota abaixo de 40 indica reprovação e
nota entre 40 e 59 indica exame especial.*/

/*Dicas: Utilize o cin, para fazer a leitura da nota, conforme mostrado em sala.
Utilize condições com o comando if para verificar a nota lida pelo comando cin.
É indicado que seja feita uma função para verificar a situação do aluno. Uma das formas
é a função receber a nota do aluno como parâmetro e retornar um string contendo um texto
referente à situação do aluno.*/

/*Exercício 12 - Faça uma alteração no seu programa anterior, para que ele utilize as notas individuais
do aluno em cada atividade da disciplina, e calcule o resultado final, para que posteriormente possa
ser verificada a aprovação do aluno.*/

/*Dixas: Crie um vetor, contendo um conjunto de notas. Faça um loop que percorre esse conjunto de
notas e faz o seu somatório.
Depois utilize a função criada no exercício 1, para verificar a situação do aluno.*/

/*Ecercício 13 - Um desenvolvedor recebe 50 reais por hora trabalhada. Considerando que ele trabalhada
8 horas por dia, crie uma função que calcula quanto esse desenvolvedor recebeu no mês atual, considerando
que ele trabalhou 22 dias nesse mês.*/

/*Exercício 14 - Uma empresa de aviação possui um tipo de avião que comporta 10 pessoas. Crie um programa
que possui uma função, cujos parâmetros de entrada são: o número de aviões disponíveis e o número de
passageiros para serem transportados. Essa função deverá calcular se os aviões conseguem comportar essas
pessoas, e caso não consiga, quantas ficarão para as próximas viagens. Faça uma simulação na qual os
aviões comportam o número de pessoas e outra na qual ele não comporta.*/

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

/*Exercício 15 - Um hospital consegue atender 20 pessoas por hora. Considerando que no momento em que
o hospital foi aberto chegaram 100 pessoas, faça um programa para calcular quanto tempo o paciente com
a senha 68 irá demorar para ser atendido.*/

#include <iostream>

using namespace std;

int main(){
    int num_atendimentos = 20;
    int posicao_fila = 68;
    int num_hrs_espera;
    num_hrs_espera = posicao_fila/ num_atendimentos;
    cout << num_hrs_espera;
}

/*Dicas: Faça um loop while, que inicia com 20 pessoas sendo atendidas sem espera, e caminha de 20 em 20.
A cada iteração ele deverá aumentar em 20 o número de pessoas sendo atendidas e em 1 o número de horas.
Caso o número de pessoas atendidas seja maior do que o número da senha que se deseja verificar, isso
indica que aquele paciente entrou em atendimento na iteração atual, e esperou o número de horas 
acumuladas até o momento.*/

/*Exercício 16 - Faça um programa em C++ que percorre um conjunto de números e informa qual deles é o
maior.*/

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

/*Exercício 17 - Faça um programa em C++ que executa a mesma operação do primeiro, porém informa a
posição do maior número, e não o seu valor.*/

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

/*Exercício 18 - Faça um ajuste no programa 16, para que ele também informe o menor valor da lista.*/

/*Exercício 19 - A equipe de uma contrutora consegue entregar 100 metros quadrados construídos por dia.
Com base nisso, faça um programa que possui uma função para efetuar o cálculo do tempo necessário
para construir um projeto com 2326 metros quadrados. Esse tempo deve ser fornecido em dias.*/

/*Exercício 20 - Gere um conjunto de 10 números inteiros de forma aleatória, e verifique qual é o maior
valor gerado.*/
#include <iostream>

using namespace std;

int main (){
    int tamanho_numeros = 10;
    int numeros [10];
    int  controle = 0;
    while(controle < tamanho_numeros){
        numeros [controle] = rand()% 50+1; // rand - gera numeros aleatorios a partir do resto de uma divisão, neste caso a divisão 
        // por 50, para esses números estarem no intervalo de 1 a 50 coloco o +1 logo após o 50, se quiser a partir de 3 coloco +3
        std::cout << numeros [controle] << std::endl; // vai imprimir os numeros do vetor ao longo que for gerando
        controle ++;
    }
    int max = numeros[0];
    int contador = 1;
    ;
    while ( contador < tamanho_numeros){
        if (numeros [contador]> max){
            max = numeros [contador];
        }
        contador ++;
    }
    std::cout << max << std::endl;
}
