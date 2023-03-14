
#include <iostream>
using namespace std;

int main() {
        // Declaração de variaveis
        float base, altura, area ;
        
        // Mensagem para o usuario adicionar valor a variavel "base"
        cout << "Digite a base do retangulo: ";
        // Valor sendo adicionado a variavel "base"
        cin >> base;
        // Mensagem para o usuario adicionar valor a variavel "altura"
        cout << "Digite altura do retangulo: ";
        // Valor sendo adicionado a variavel "altura"
        cin >> altura;
        
        // Formula do calculo da area do rentagulo
        area = base*altura;
        
        // Mensagem mostrando o valor das variaveis e o valor da variavel "area" depois do calculo
        if(altura != base){
        cout << "A area do rentagulo de base: " << base << " e altura " << altura << " eh: " << area << endl;}
        // Se altura e base forem iguais eu reduzi para reduzir o texto e mostrar somente um valor
        else if(altura = base){
         cout << "Isso é um retangulo de base e altura: " << base << " e sua area é de " << area << endl;
        }
       
        return 0;
}