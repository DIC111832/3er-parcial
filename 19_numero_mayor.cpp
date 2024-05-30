#include <iostream>
using namespace std;
int main (){
    int digitos[10];
    int i;
    int mayor;
    
cout<<"Por favor, ingrese 10 dígitos uno por uno :\n";
    for (i = 0; i < 10; i++) {
        cout<<"Ingrese el dígito "<< i + 1 << ": ";
        cin >> digitos[i];
    }
    
    mayor = digitos[0];
    
    for (i = 1; i < 10; i++) {
        if (digitos[i] > mayor) 
        {
            mayor = digitos[i];
        }
    }
    cout <<"el mayor de los numeros es \n"<<mayor;
}