#include <iostream>

using namespace std;

int main(){
    int carnet, option, nota1 =0 , nota2 = 0, nota3 = 0, nota4 = 0 , nota5 = 0, nota6 = 0 , nota7 = 0, nota8 = 0, nota9 = 0;
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
        cout << "1. Agregar nota" << endl;
        cout << "2. Consultar todas las notas" << endl;
        cout << "4. Calcular promedio" << endl;
        cout << "Selecciona una opcion: ";
        cin >> option;
        if (option == 1)
        {
            do
            {
                cout << "Que nota quieres agregar o modificar: " << endl;
                cout << "1. Nota 1" << endl;
                cout << "2. Nota 2" << endl;
                cout << "3. Nota 3" << endl;
                cout << "4. Nota 4" << endl;
                cout << "5. Nota 5" << endl;
                cout << "6. Nota 6" << endl;
                cout << "7. Nota 7" << endl;
                cout << "8. Nota 8" << endl;
                cout << "9. Nota 9" << endl;
                cout << "10. salir" << endl;

                cin >> option;
                if (option == 1)
                {
                   
                    cout << "Ingrese la nota: ";
                    cin >> nota1;
                }else if (option == 2)
                {
                     
                     cout << "Ingrese la nota: ";
                    cin >> nota2;
                }else if (option == 3)
                {
                     
                     cout << "Ingrese la nota: ";
                    cin >> nota3;
                }else if (option == 4)
                {
                     
                     cout << "Ingrese la nota: ";
                    cin >> nota4;
                }else if (option == 5)
                {
                     
                     cout << "Ingrese la nota: ";
                    cin >> nota5;
                }else if (option == 6)
                {
                     
                     cout << "Ingrese la nota: ";
                    cin >> nota6;
                }else if (option == 7)
                {
                     
                     cout << "Ingrese la nota: ";
                    cin >> nota7;
                }else if (option == 8)
                {
                     
                     cout << "Ingrese la nota: ";
                    cin >> nota8;
                }else if (option == 9)
                {
                
                    cout << "Ingrese la nota: ";
                    cin >> nota9;
                }
                
            } while (option != 10);
            
        }else if (option == 2)
        {
            cout << "Tus notas son: " << endl;
            cout << nota1 <<endl;
            cout << nota2 <<endl;
            cout << nota3 <<endl;
            cout << nota4 <<endl;
            cout << nota5 <<endl;
            cout << nota6 <<endl;
            cout << nota7 <<endl;
            cout << nota8 <<endl;
            cout << nota9 <<endl;
        }else if (option == 3)
        {
            cout << "Tu promedio es: " << endl;
            int promedio = 0;
            promedio = (nota1+nota2+nota3+nota4+nota5+nota6+nota7+nota8+nota9)/9;
            cout << promedio << endl;
        }
        
        
        

    } while (option != 3);
     

    return 0;
}