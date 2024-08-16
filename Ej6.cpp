#include <iostream>

using namespace std;

// Función recursiva para contar dígitos pares en posiciones impares
int contarParesEnPosicionesImpares(int n, int pos) {
    // Caso base: si n es 0, no hay más dígitos que revisar
    if (n == 0) {
        return 0;
    }
    // Verificar si la posición actual es impar y el dígito es par
    int digitoActual = n % 10;
    if (pos % 2 != 0 && digitoActual % 2 == 0) {
        // Incrementar el contador y realizar la llamada recursiva
        return 1 + contarParesEnPosicionesImpares(n / 10, pos - 1);
    } else {
        // Realizar la llamada recursiva sin incrementar el contador
        return contarParesEnPosicionesImpares(n / 10, pos - 1);
    }
}

int main() {
    int n,pos;

    cout<<"Ingrese la cantidad de digitos que tendra su numero"<<endl;
    cin>>pos;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    // Contar dígitos pares en posiciones impares usando la función recursiva
    int resultado = contarParesEnPosicionesImpares(n,pos);
    cout << "Cantidad de dígitos pares en posiciones impares: " << resultado << endl;

    return 0;
}

