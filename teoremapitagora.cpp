
#include <iostream>
//Puxando calculos basicos 
#include <cmath>
using namespace std;

int main() {
        // Declaração de váriaveis
        float coposto, cadjacente , hipotenusa, resposta;
        
        // Mensagem para o usuario adicionar um valor a variavel "cadjacente"
        cout << "Digite o valor do cateto adjacente: ";
        // Valor sendo atribuido a variavel "cadjacente"
        cin >> cadjacente;
          // Mensagem para o usuario adicionar um valor a variavel "coposto"
        cout << "Digite o valor do cateto oposto: ";
        // Valor sendo atribuido a variavel "coposto"
        cin >> coposto;
        
        //Formula para calcular o valor da hipotenusa
        hipotenusa = (coposto*coposto)+(cadjacente*cadjacente);
        //Pegando a raiz quadrada da hipotenusa para resposta correta
        resposta = sqrt(hipotenusa);
        
        //Mensagem mostrando o valor da  hipotenusa depois do calculo
        cout << "O valor da hipotenusa é: "<< resposta << endl;
       
        
        return 0;
}