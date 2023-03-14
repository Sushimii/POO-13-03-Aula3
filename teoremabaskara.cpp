
#include <iostream>
//Puxando biblioteca com calculos basicos 
#include <cmath>
using namespace std;

int main() {
        // Declaração de váriavel
        float a, b, c, x1, x2, delta;
        
        // Mensagem para o usuario adicionar um valor a variavel "a"
        cout << "Digite o valor de a: ";
        // Valor sendo atribuido a variavel "a"
        cin >> a;
        
        // Mensagem para o usuario adicionar um valor a variavel "b"
        cout << "Digite o valor de b: ";
        // Valor sendo atribuido a variavel "b"
        cin >> b;
        
        // Mensagem para o usuario adicionar um valor a variavel "c"
        cout << "Digite o valor de c: ";
        //Valor sendo atribuido a variavel "c"
        cin >> c;
        
        // Formula do calculo para descobrir delta que é 2 ao quadrado - 4 * a * c
        delta = pow (b,2) - 4 * a * c;
        
        // Se delta for maior igual a 0 fazer o calculo de +- do teorema de Baskara
        if (delta >=0){
            // Calculo da primeira raiz com +
            x1 = (-b + sqrt(delta)) / (2*a);
            // Calculo da segunda raiz com -
            x2 = (-b - sqrt(delta)) / (2*a);
            
            // Mensagem mostrando o resultado das 2 raizes reais depois de ser feito o calculo
            cout << "As raizes da equação são: " << x1 << " e " << x2 << endl;
        }
        // Condição senao para delta menor que 0
        else {
            // Mensagem mostrando que não existem raizes reais de delta < 0
            cout << "A equação não tem raizes reais." << endl;
        
        }
       
        
        return 0;
}