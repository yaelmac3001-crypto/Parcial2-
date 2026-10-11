// ejercicio 5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool tieneNumeros(const string& texto) {
    for (char c : texto) {
        if (isdigit(static_cast<unsigned char>(c)))
            return true;
    }
    return false;
}

int main() {
    string completo, nombre, apellido;

    cout << "Ingresa nombre y apellido: ";
    getline(cin, completo);

    
    size_t pos = completo.find(' ');

    if (pos == string::npos) {
        cout << "Error: debes escribir nombre y apellido separados por un espacio." << endl;
        return 1;
    }

   
    nombre = completo.substr(0, pos);
    apellido = completo.substr(pos + 1);

 
    if (tieneNumeros(nombre) || tieneNumeros(apellido)) {
        cout << "Error: el nombre y el apellido no pueden contener numeros." << endl;
        return 1;
    }

    cout << "Nombre:   " << nombre << endl;
    cout << "Apellido: " << apellido << endl;

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
