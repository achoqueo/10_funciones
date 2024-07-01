#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    double discriminante, rdiscriminante,  partereal, parteimaginaria;
    double raiz1, raiz2;

    cout << "Ingrese el coeficiente a: ";cin >> a;
    cout << "Ingrese el coeficiente b: ";cin >> b;
    cout << "Ingrese el termino independiente c: ";cin >> c;

    discriminante = ((b*b)-4*a*c);
    if (discriminante > 0) {
        rdiscriminante = sqrt(discriminante);
        raiz1 = (-b + rdiscriminante) / (2 * a);
        raiz2 = (-b - rdiscriminante) / (2 * a);
        cout << "Las raices son:" << endl;
        cout << "Raiz 1 = " << raiz1 << endl;
        cout << "Raiz 2 = " << raiz2 << endl;
    } else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        cout << "Las raíces son:" << endl;
        cout << "Raíz 1 = Raíz 2 = " << raiz1 << endl;
    } else {
        partereal = -b / (2 * a);
        parteimaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Las raíces son:" << endl;
        cout << "Raíz 1 = " << partereal << " + " << parteimaginaria << "i" << endl;
        cout << "Raíz 2 = " << partereal << " - " << parteimaginaria << "i" << endl;
    }

    return 0;
}

