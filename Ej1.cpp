#include <iostream>
using namespace std;

// RECURSIVIDAD
// condicion base/corte.
// recursividad en si misma.
// terminacion de la recursividad. Caso de terminacion.

int potencia(int n, int pot)
{
    if (pot == 0)
    {
        return 1;
    }
    else
    {
        return n * potencia(n, pot - 1);
    }
}

int main()
{

    int numero1, pot;
    cout << "Ingrese el numero" << endl;
    cin >> numero1;
    cout << "Ingrese la potencia" << endl;
    cin >> pot;

    cout<<"El resultado es: "<<potencia(numero1, pot)<<endl; 

    return 0;
}
