#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main() {
    int cnumeros, maximo;
    srand(time(0)); 

    cout << "Ingrese la cantidad de numeros aleatorios que desea generar: ";
    cin >> cnumeros;

    cout << "Ingrese el valor maximo permitido para los numeros aleatorios: ";
    cin >> maximo;

    cout << "Numeros aleatorios generados son: " << endl;
    for (int i = 0; i < cnumeros; ++i) {
        int naleatorio = rand() % (maximo + 1); 
        cout << naleatorio << " ";
    }
    cout << endl;

    return 0;
}

