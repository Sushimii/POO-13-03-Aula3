
#include <iostream>
using namespace std;

int main() {
    
        // Declaração de variaveis    
        float raio, area;
        // Atribuimento do valor na variavel  "PI"
        const float PI = 3.14159;
        
        // Interface mostrando a mensagem para o usuario atribuir um valor a "raio"
        cout << "Digite o raio do circulo: " ;
        // Variavel "raio" recebendo o valor digitado
        cin >> raio; 
        
        // A formula matematica para calcular a area
        area = PI * raio * raio;
        
        // Saída do resultado final depois de ser feito o calculo
        cout << "A area do circulo de raio " << raio << " eh: " << area << endl;
        
        return 0;
}