#include <iostream>
#include <cstdlib>

using namespace std;

int o;
float celsius, kelvin;
int main()
{
    do
    {
        cout << "Convertidor Kelvin y Celsius" << endl;
        cout << "Elija una opción" << endl;
        cout << "1.- Celsius-Kelvin" << endl;
        cout << "2.- Kelvin-Celsius" << endl;
        cout << "Introduzca su opción(1,2)" << endl;
        cin >> o;
        switch (o)
        {
        case 1:
            cout << "Introduce la temperatura que quieras convertir" << endl;
            cin >> celsius;
            kelvin = celsius + 273;
            cout << "La temperatura en kelvin es: " << kelvin << endl;
            cout << "Para ver de nuevo el menú presiona cualquier número" << endl;
            cout << "Para salir presiona 0" << endl;
            cin >> o;
            break;
        case 2:
            cout << "Introduce la temperatura que quieras convertir" << endl;
            cin >> kelvin;
            celsius = kelvin - 273;
            cout << "La temperatura en celsius es: " << celsius << endl;
            cout << "Para ver de nuevo el menú presiona cualquier número" << endl;
            cout << "Para salir presiona 0" << endl;
            cin >> o;
            break;
        default:
            break;
        }
    } while (o != 1 && o != 2 && o != 0);
}
