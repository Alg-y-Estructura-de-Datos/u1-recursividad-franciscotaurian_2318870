#include <iostream>
using namespace std;


void invertir(int num, int &invertido){
    if(num==0){
        return;
    }
    else
    {
        invertido=invertido*10 + num % 10;
        invertir(num/10,invertido);
    }
    
}


int main() {

    int num,invertido=0;

    do{ 
    cout<<"Ingrese el numero que desee invertir"<<endl;
    cin>>num;
    if(num<0){
        cout<<"El numero debe ser positivo"<<endl;
    }
    }while(num<0);  

    invertir(num,invertido);
    cout<<"El invertido de: "<<num<<". Es: "<<invertido<<endl;

    return 0;
}
