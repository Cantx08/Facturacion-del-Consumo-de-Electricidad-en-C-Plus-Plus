#include <iostream>

using namespace std;

int main()
{
    cout << "14 Programa que muestra facturas de electricidad" << endl;
    string nombre;
    double lecturaAnterior, lecturaActual, consumo, valorAPagar;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    fflush(stdin);
    // La lectura anterior debe ser mayor a 0 y la lectura actual mayor a la primera.
    // Ingresar la lectura Anterior y la Actual
    cout << "\nIngrese la lectura del mes anterior: ";
    cin >> lecturaAnterior;
    cout << "\nIngrese la lectura de este mes: ";
    cin >> lecturaActual;

    // Calcular el consumo
    consumo = lecturaActual - lecturaAnterior;
    // Calcular el valor a Cancelar
    valorAPagar = 0.8 * consumo;

    // Mostrar el resultado en consola.
    cout << "\nEmpresa Electrica EMAAP-Q";
    cout << "\nNombre: " << nombre;
    cout << "\nLectura Anterior: " << lecturaAnterior << " KW";
    cout << "\nLectura Actual: " << lecturaActual << " KW";
    cout << "\nTotal a pagar: " << valorAPagar << " USD.";
    return 0;
}