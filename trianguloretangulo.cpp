
#include <iostream>
using namespace std;

int main() {
        float base, altura , area;
        
        // Mensagem mostrando para o usuario dar um valor para a variavel"base"
        cout << "Digite o valor do cateto adjacente(base): " ;
        // Valor sendo atribuido a variavel "base"
        cin >> base ;
        // Mensagem mostrando para o usuario dar um valor para a variavel"altura"
        cout << "Digite o valor do cateto oposto(altura): ";
         // Valor sendo atribuido a variavel "altura"
        cin >> altura;
        
        // Formula do calculo a ser feito para descobrir a área
        area = (base*altura) / 2;
        
        // Mensagem mostrando os valores adicionados pelo usuario e o valor da área depois do calculo 
        cout << "A área do triângulo retângulo com cateto adjacente de: " << base << " e cateto oposto de: " << altura << " eh: " << area << endl;
        
        
        return 0;
}