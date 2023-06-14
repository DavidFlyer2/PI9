#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int opc, num1, num2,result;

    cout << "Calculadora" << endl;
    cout << "Elige una opción:" << endl;
    cout << "1) Suma" << endl;
    cout << "2) Resta" << endl;
cout << "3) Multiplicación" << endl;

    cin >>opc;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (opc) {
        case 1:
        	result=num1 + num2;
            cout << "El resultado es: "<<result<< endl;
            break;
        case 2:
        	result=num1 - num2;
            cout << "El resultado es: "<<result<< endl;
            break;
        case 3:
        	result=num1 * num2;
            cout << "El resultado es: "<<result<< endl;
            break;
        default:
            cout << "No existe."<< endl;
    }

    getch();
}

