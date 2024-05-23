#include <iostream>
using namespace std;
#define gradoscf 0.55555
int main (){
    int gradosf;
    float gradosc;
    char nombre [100];

    cout << "hola, cual es tu nombre?";
    fgets(nombre,sizeof(nombre),stdin);
    cout << "hola" << nombre;
    cout <<"ingrese los grados fahrenheit que  desea convertir a celsius";
    cin >> gradosf;
    gradosc=(gradosf-32)*gradoscf;
    cout << "el total de grados fahrenheir es de :" << gradosc;
    return 0;

}