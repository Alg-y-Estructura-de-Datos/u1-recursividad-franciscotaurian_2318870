#include <iostream>
using namespace std;

int sumatoria(int n){
    if (n==1)
    {   
        cout<<n<<"=";
        return 1;
    }
    else
    {   
        cout<<n<<"+";
        return n+sumatoria(n-1);
        
    }
    
    
}

int main() {

    int ns;
    cout<<"Ingrese la cantidad de numeros naturales de los que quiere obtener la sumatoria"<<endl;
    cin>>ns;

    cout<<sumatoria(ns)<<endl;

    return 0;
}
