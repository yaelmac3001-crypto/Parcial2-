// EJERCICIO 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

const int N = 5;

int main() {
    float grupo1[N], grupo2[N], mayores[N];

    
    cout << "grupo 1:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Promedio del alumno " << i + 1 << ": ";
        cin >> grupo1[i];
    }

    
    cout << "grupo 2:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Promedio del alumno " << i + 1 << ": ";
        cin >> grupo2[i];
    }

   
    for (int i = 0; i < N; i++) {
        if (grupo1[i] >= grupo2[i])
            mayores[i] = grupo1[i];
        else
            mayores[i] = grupo2[i];
    }


    cout << "mayores promedios:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Posición " << i + 1 << ": " << mayores[i]
            << " (Grupo 1: " << grupo1[i]
            << ", Grupo 2: " << grupo2[i] << ")" << endl;
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
