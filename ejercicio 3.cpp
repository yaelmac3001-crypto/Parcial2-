// ejercicio 2}.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
 
const int filas = 10;
const int columnas = 3;

int main() {
	float matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        cout << "alumno " << i + 1 << endl;
        cout << "promedio grupo A: ";
        cin >> matriz[i][0];
        cout << "promedio grupo B: ";
        cin >> matriz[i][1];
    }

    for (int i = 0; i < filas; i++) {
        matriz[i][2] = (matriz[i][0] >= matriz[i][1]) ? matriz[i][0] : matriz[i][1];
    }

    for (int i = 0; i < filas; ++i)
        cout << "Alumno " << i + 1 << ": A=" << matriz[i][0] << " B=" << matriz[i][1]
        << "Promedio mas alto =" << matriz[i][2] << '\n';

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
