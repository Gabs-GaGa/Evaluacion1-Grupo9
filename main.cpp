#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre_completo;
    int edad;

    cout << "===================================" << endl;
    cout << "BIENVENIDOS AL PROGRAMA DEL GRUPO 9" << endl;
    cout << "===================================" << endl;
    
    cout << "\nPor favor ingrese su nombre completo: ";
    getline(cin, nombre_completo);

    do{
        cout << "\nAhora ingrese su edad: ";
        cin >> edad;
        if (edad < 0 || edad > 120) {
            cout << "Por favor ingrese una edad entre 0 y 120." << endl;
        }
    }
    while(edad < 0 || edad > 120);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nA continuacion se mostaran los datos registrados:\n\n";
    cout << "Nombre: " << nombre_completo << endl;
    cout << "Edad: " << edad << endl;

    cout << "\n<--- Integrantes del Grupo 9 --->\n";
    cout << "Angel Enrique Gonzalez Guillen" << endl;
    cout << "Carlos Eduardo Heredia Morales" << endl;
    cout << "Gabriela Alexandra Garcia Argote" << endl;
    cout << "Diego Andres Torrealba Silva" << endl;
    cout << "Pablo David Machado Ramirez" << endl;
    return 0;
}