#include <iostream>
using namespace std;
int main(){
    int x,y;
    float division ;
    x=11;
    y=8;

    cout << "el valor de x es de " << x;
    cout << " el valor de y es de " << y;
    //el porcentaje es para sacar el residuon, mas no la division
    division = x%y;
    cout << " el residuo de la division de ambos numeros es de :" << division;
    return 0;

}