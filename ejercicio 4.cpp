// ejercicio 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

const int N = 100;


int main() {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 1000);


    float ventas[N];
    float total = 0;
      

  
    for (int i = 0; i < N; i++) {
       //ventas[i] = dist(gen);
        cout << "Venta del cliente " << i + 1 << ": $";//<<ventas[i] << endl;
      cin >> ventas[i];
    }

   
    for (int i = 0; i < N; i++) {
        total += ventas[i];
    }

  
    cout << "\nTotal de ingresos: $" << total << endl;

    int x = 5;
    cout << x;
    int y = (x << 2);

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
