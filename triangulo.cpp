
#include <iostream>
using namespace std;

int main() {
        // Declaração de váriaveis 
        float base, altura, area;

        // Mensagem para o usuario digitar o valor que a variavel "base" irá receber
        cout << "Digite a base do triângulo:  ";
        // Inserindo o valor digitado na váriavel "base"  
        cin >> base;
        // Mensagem para o usuario digitar o valor que a variavel "altura" irá receber
        cout << "Digite a altura do triângulo:  ";
        // inserindo o valor digitado na váriavel "altura"
        cin >> altura;
        
        // formula do calculo de area usando as variaveis ja com os valores inseridos    
        area = (base*altura) / 2;
        
        // Mensagem mostrando os valores adicionados pelo usuario e o valor da área depois do calculo 
        cout << "A área do triangulo de base: " << base << " e altura: " << altura << " eh: " << area << endl;
        
        return 0;
}
