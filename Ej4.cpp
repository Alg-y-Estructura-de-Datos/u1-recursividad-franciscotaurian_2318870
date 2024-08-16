#include <iostream>
#include <vector>
using namespace std;

void buscarMayor(int array[],int &mayor,int tamanio){
    if (tamanio==0){
        if (array[tamanio]>mayor)
        {
            mayor=array[tamanio];
        }
        return;
    }
    else
    {
        if (array[tamanio-1]>mayor)
        {
            mayor=array[tamanio-1];
        }
        buscarMayor(array,mayor,tamanio-1);
    }
    
}



int main(){ 
    int mayor=0,tamanio;
    cout<<"Ingrese el la cantidad de numeros que desea ingresar, debe ser positivo"<<endl;
    cin>>tamanio;

    int array[tamanio];

    for (int i = 0; i < tamanio; i++)
    {
        cout<<"Ingrese el numero"<<endl;
        cin>>array[i];
    }
    
    buscarMayor(array,mayor,tamanio);
    cout<<"El numero mayor es: "<<mayor<<endl;

    return 0;
}






/*
/ Función recursiva para encontrar el mayor elemento en un vector
int encontrarMayorRecursivo(const vector<int>& vec, int n) {
    // Caso base: si el vector tiene un solo elemento, ese elemento es el mayor
    if (n == 1) {
        return vec[0];
    }
    // Llamada recursiva: comparar el último elemento con el mayor de los anteriores
    int maxAnterior = encontrarMayorRecursivo(vec, n - 1);

    if (vec[n - 1] > maxAnterior) {
        return vec[n - 1];
    } else {
        return maxAnterior;
    }
}

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Llamar a la función recursiva para encontrar el mayor elemento
    int mayor = encontrarMayorRecursivo(vec, n);
    cout << "El mayor elemento del vector es: " << mayor << endl;

    return 0;
}
*/