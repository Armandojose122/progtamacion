#include <iostream>

using namespace std;



int main () {
    int num1;
    int num2;
    cout << "Ingrese el primer numero: \n";
    cin >> num1;
    cout << "ingrese el segundo numero: \n";
    cin >> num2;
    int suma ,resta , multiplicacion, resto;
    float division;
    suma = num1+ num2;
    resta = num1- num2;
    multiplicacion = num1*num2;
    division = (float) num1 / (float) num2;
    resto = num1%num2;
    cout << "resultado de la suma del primer numero y el segundo numero: ";
    cout << suma << " \n";
    cout << "resultado de la resta del primer numero y el segundo numero: ";
    cout << resta << "\n";
    cout << "resultado de la multiplicacion del primer numero y el segundo numero: ";
    cout << multiplicacion << "\n";
    cout << "resultado de la division del primer numero y el segundo numero: ";
    cout << division << "\n";
    cout <<"resultado del modulo del primer numero y el segundo numero: ";
    cout << resto << "\n";
    return 0;
}
