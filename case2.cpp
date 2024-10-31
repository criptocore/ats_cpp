// escribe la siguiente expresión  matemática como una expresion en c++: (a+b) / (c+d)

#include <iostream>
using namespace std;

int main() {
    
    float a, b, c, d, resultado = 0;

    cout<<"Ingrese el valor de a: "<<endl; cin>>a;
    cout<<"Ingrese el valor de b: "<<endl; cin>>b;
    cout<<"Ingrese el valor de c: "<<endl; cin>>c;
    cout<<"Ingrese el valor de d: "<<endl; cin>>d;

    resultado = (a+b) / (c+d);

    cout<<"El resultado de la siguiente expresion es: "<<resultado<<endl;

    return 0;
}