#include <iostream>

using namespace std;

int main(){
    int num = 7, total;
    cout << "Los multiplos de 7 del 1 al 100 son: " << endl;
    for (int i = 1; i < 14; i++)
    {
        total = (i * 7);
        cout << total << ", ";
    }
    
    
    return 0;
}