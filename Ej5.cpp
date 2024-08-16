#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool verifivarDigito(vector<int> &a, int d)
{
    if (a.size() == 0)
    {
        return false;
    }
    if (a[a.size() - 1] == d)
    {
        return true;
    }
    a.pop_back(); // elimina el ultimo digito
    verifivarDigito(a, d);
}

int main()
{
    vector<int> array;
    int num, num1;
    string numst;

    cout << "Ingrese un numero" << endl;
    cin >> num1;

    numst = to_string(num1);

    /*
    El proceso de conversión dentro del bucle for consiste en:

    Tomar cada carácter de la cadena numero_str.
    Convertir ese carácter a su valor numérico real restando '0'.
    Almacenar ese valor numérico en el vector digitos usando push_back.
    */

    for (char digito : numst)
    {
        // Convertir el carácter a entero y agregarlo al vector
        array.push_back(digito - '0');
    }

    cout << "Ingrese el numero que desea buscar" << endl;
    cin >> num;

    if (verifivarDigito(array, num) == false)
    {
        cout << "El digito que desea buscar no esta en el numero ingresado previamente" << endl;
    }
    else
    {
        cout << "El digito se encuentra en el numeor" << endl;
    }
}