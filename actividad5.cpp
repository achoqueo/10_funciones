#include <iostream>
#include <cmath>
using namespace std;
void calcularRaices(double a, double b, double c, double &raiz1, double &raiz2, bool &raicesReales);
int main() {
    double a, b, c;
    double raiz1, raiz2;
    bool raicesReales;

    cout << "Ingrese el coeficiente a: ";cin >> a;
    cout << "Ingrese el coeficiente b: ";cin >> b;
    cout << "Ingrese el termino independiente c: ";cin >> c;

    calcularRaices(a, b, c, raiz1, raiz2, raicesReales);

    if (raicesReales) {
        cout << "Las raices son reales:" << endl;
        cout << "Raiz 1 = " << raiz1 << endl;
        cout << "Raiz 2 = " << raiz2 << endl;
    } else {
        cout << "Las raices son complejas:" << endl;
        cout << "Raiz 1 = " << raiz1 << " + " << raiz2 << "i" << endl;
        cout << "Raiz 2 = " << raiz1 << " - " << raiz2 << "i" << endl;
    }

    return 0;
}
 void calcularRaices(double a, double b, double c, double &raiz1, double &raiz2, bool &raicesReales){
    double discriminante = ((b*b)-4*a*c);
    if (discriminante > 0) {
        raicesReales = true;
        double rdiscriminante = sqrt(discriminante);
        raiz1 = (-b + rdiscriminante) / (2 * a);
        raiz2 = (-b - rdiscriminante) / (2 * a);
    } else if (discriminante == 0) {
        raicesReales = true;
        raiz1 = -b / (2 * a);
        raiz2 = raiz1;
    } else {
        raicesReales = false;
        double partereal = -b / (2 * a);
        double parteimaginaria = sqrt(-discriminante) / (2 * a);
        raiz1 = partereal;
        raiz2 = partereal;
    }
}


