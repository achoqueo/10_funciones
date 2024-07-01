#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;
string obtenerJugadaComputadora() {
    int numero = rand() % 3; 
    switch (numero) {
        case 0:
            return "piedra";
        case 1:
            return "papel";
        case 2:
            return "tijera";
    }
    return "";
}
int determinarGanador(string jugadaUsuario, string jugadaComputadora) {
    if (jugadaUsuario == jugadaComputadora) {
        return 0; 
    } else if ((jugadaUsuario == "piedra" && jugadaComputadora == "tijera") ||
               (jugadaUsuario == "papel" && jugadaComputadora == "piedra") ||
               (jugadaUsuario == "tijera" && jugadaComputadora == "papel")) {
        return 1;
    } else {
        return 2;
    }
}
int main() {
    srand(time(0));

    int victoriasUsuario = 0, victoriasComputadora = 0;
    string jugadaUsuario, jugadaComputadora;
    int resultadoRonda;
    cout << "Bienvenido al juego de Piedra, Papel o Tijera" << endl;
    while (victoriasUsuario < 3 && victoriasComputadora < 3) {
        cout << "Es tu turno, elige entre piedra, papel o tijera: ";cin >> jugadaUsuario;
        
        while (jugadaUsuario != "piedra" && jugadaUsuario != "papel" && jugadaUsuario != "tijera") {
            cout << "Jugada invalida. Por favor elige piedra, papel o tijera: ";cin >> jugadaUsuario;
        }

        jugadaComputadora = obtenerJugadaComputadora();
        cout << "La computadora eligio: " << jugadaComputadora << endl;

        resultadoRonda = determinarGanador(jugadaUsuario, jugadaComputadora);

        if (resultadoRonda == 0) {
            cout << "Ronda en empate" << endl;
        } else if (resultadoRonda == 1) {
            cout << "Ronda ganada" << endl;
            victoriasUsuario++;
        } else {
            cout << "Ronda perdida" << endl;
            victoriasComputadora++;
        }
        cout << "Marcador: Jugador " << victoriasUsuario << " - " << victoriasComputadora << " Computadora" << endl;
    }

    if (victoriasUsuario >= 3) {
        cout << "Felicitaciones haz ganado" << endl;
    } else {
        cout << "Perdiste, para la proxima sera." << endl;
    }

    return 0;
}

