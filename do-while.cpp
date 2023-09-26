#include <iostream>
#include <cstdlib>

using namespace std;
int mes;

int main()
{
    do
    {
        cout << "Ingresa un mes(1,2,3...)" << endl;
        cin >> mes;
        if(mes > 12 || mes < 1)
        {
            cout << "Ese mes no es válido" << endl;
        }
    }
    while (mes > 12 || mes < 1);
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        cout << "Este mes tiene 31 días" << endl;
    }
    else if (mes == 2)
    {
        cout << "Este mes tiene 28 días" << endl;
    }
    else{
        cout << "Este mes tiene 30 días" << endl;
    }
}
