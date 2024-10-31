#include <iostream>
using namespace std;

int main() {

    //Escribe un programa que lea la entrada de dos números y muestre la suma, resta, multiplicación y division

    int numero1, numero2; // Para que salga decimal la respuesta de la división la variable debe de ser de tipo float
    int suma = 0, resta = 0, multiplicacion = 0;
    float division = 0;

    cout<<"ingrese el primer numero: "<<endl;
    cin>>numero1;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = static_cast<float>(numero1) / numero2;// Esta seria la segunda opcion para que el resultado sea con decimales si fuera necesario

    cout<<"El resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;


    return 0;
}