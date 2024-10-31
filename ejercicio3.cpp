/*
Realice un programa que lea como entrada estándar los siguiemtes datos de una persona

Edad: Dato de tipo entero
Sexo: De tipo carácter
Altura en metros: Dato de tipo real

Tras leer los datos, el programa debe de mostrarlos en la salida estandár
*/
#include <iostream>
using namespace std;

int main()
{
    int edad;
    char sexo[10];
    float altura;

    cout<<"ingrese su edad: "<<endl;
    cin>>edad;

    cout<<"Escriba su opcion Masculino o Femenino"<<endl;
    cin>>sexo;

    cout<<"Ingrese su estatura: "<<endl;
    cin>>altura;

    cout<<"\nSu edad es de: "<<edad<<endl;/*para el slach invertido son las teclas AltGr+? = \   */   
    cout<<"Su sexo es: "<<sexo<<endl;
    cout<<"Su estatura es: "<<altura<<endl;


    return 0;
}