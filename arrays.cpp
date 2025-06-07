#include <iostream>

using namespace std;

int main(){
    int num[5], mayor = 0, menor = 100000000;
    cout << "Por favor ingresa 15 numero enteros: " << endl;

    for (int i = 0; i < 15; i++)
    {
        cin >> num[i];

        if (num[i] > mayor)
        {
            mayor = num[i];
        }
        if (num[i] < menor)
        {
            menor = num[i];
        }          
    }
    cout << "tus numeros ingresados fueron: " << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << num[i] << ", ";
    }
    cout << endl;
    cout << "Tu numero mayor es: " << mayor << endl;
    cout << "Tu numero menor es: " << menor << endl; 
    
    return 0;
}