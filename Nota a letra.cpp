#include <iostream>
using namespace std;

int main() {
    int nota;
    char letra;

    // Leer la nota
    cout << "Ingrese la nota (0-20): ";
    cin >> nota;

    // Verificar que la nota sea válida
    if (nota < 0 || nota > 20) {
        cout << "Nota no valida" << endl;
    }
    else if (nota >= 18) {
        letra = 'A';
        cout << "Calificacion: " << letra << endl;
    }
    else if (nota >= 14) {
        letra = 'B';
        cout << "Calificacion: " << letra << endl;
    }
    else if (nota >= 12) {
        letra = 'C';
        cout << "Calificacion: " << letra << endl;
    }
    else {
        letra = 'D';
        cout << "Calificacion: " << letra << endl;
    }

    return 0;
}
