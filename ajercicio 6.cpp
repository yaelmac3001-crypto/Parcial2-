// ajercicio 6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string matricula;
    float calif[3];
};

int main() {
    Alumno alumnos[5];

   
    for (int i = 0; i < 5; i++) {
        cout << "Alumno " << i + 1 << endl;
        
        cout << "  Nombre: "; 
        getline(cin, alumnos[i].nombre);

        cout << "  Matricula: ";
        getline(cin, alumnos[i].matricula);

        for (int j = 0; j < 3; j++) {
            cout << "  Calificacion " << j + 1 << ": ";
            cin >> alumnos[i].calif[j];
        }
        cin.ignore();
    }

    cout << endl;
    for (int i = 0; i < 5; i++) {
        float suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += alumnos[i].calif[j];
        }
        cout << alumnos[i].nombre << " (" << alumnos[i].matricula
            << ") - Promedio: " << suma / 3 << endl;
    }

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
