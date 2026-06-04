#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre_completo;

    cout << "===================================" << endl;
    cout << "BIENVENIDOS AL PROGRAMA DEL GRUPO 9" << endl;
    cout << "===================================" << endl;
    
    cout << "\nPorfavor ingrese su nombre completo: ";
    getline(cin, nombre_completo);

    cout << "\nA continuacion se mostaran los datos registrados:\n\n";
    cout << "Nombre: " << nombre_completo << endl;

    cout << "\n<--- Integrantes del Grupo 9 --->\n";
    cout << "\nAngel Enrique Gonzalez Guillen\n";
    return 0;
}