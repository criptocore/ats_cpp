// Escriba la siguiente expresión matemática como una expresión para usar en c++: a/b + 1

#include <iostream>
using namespace std;

int main() {
    
    float a, b, resultado = 0;

    cout<<"Digite el valor de a: "<<endl;
    cin>>a;

    cout<<"Digite el valor de b: "<<endl;
    cin>>b;

    resultado = (a/b) + 1;
    cout.precision(2); //Esta linea ayuda a reducir o redondear el resultado a dos numeros (entero y decimal) la respuesta
    cout<<"El resutado de esta expresion es: "<<resultado<<endl;



    return 0;
}