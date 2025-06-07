#include <iostream>

using namespace std;

int main(){
    int carnet, option;
    string name;
    cout << "Ingresa tu nombre: ";
    cin >> name;
    cout << "Ingresa tu numero de carnet: ";
    cin >> carnet;
// verificacion de carnet
    while (carnet <= 9999999 || carnet > 99999999)
    {
        cout << "Ingrese un numero de carnet valido (8 digitos): " << endl;
        cin >> carnet;
    }
// menu
    do
    {
        cout << "------ menu pricipal ------" << endl;
        cout << "1. Prestar libro" << endl;
        cout << "2. Devolver libro" << endl;
        cout << "3. salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> option;

    } while (option != 3);
     

    return 0;
}