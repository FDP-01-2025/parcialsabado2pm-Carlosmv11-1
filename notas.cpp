#include <iostream>

using namespace std;

int main(){
    int carnet, option;
    string name;
    cout << "Ingresa tu nombre: ";
    cin >> name;
    cout << "Ingresa tu numero de codigo: ";
    cin >> carnet;
// verificacion de carnet
    while (carnet <= 99999)
    {
        cout << "Ingrese un numero de carnet valido (6 digitos): " << endl;
        cin >> carnet;
    }
// menu
    do
    {
        cout << "------ menu pricipal ------" << endl;
        cout << "1. agregar nota" << endl;
        cout << "2. consultar todas las notas" << endl;
        cout << "3. salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> option;

    } while (option != 3);
     

    return 0;
}