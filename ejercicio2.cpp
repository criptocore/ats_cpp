// Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto al aplicarle el igv
#include <iostream>
using namespace std;

int main() {
    float precio = 0, igv = 0;

    cout<<"Ingrese el precio del producto: "<<endl;
    cin>>precio;

    igv = precio * 1.18;

    cout<<"El precio final de pago mas igv es: "<<igv<<endl;

    return 0;
}