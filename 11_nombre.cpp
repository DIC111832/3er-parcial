#include <iostream>
using namespace std;
int main (){
    char nombre [100];

    cout << " hola, cual es tu nombre?:  ";
    fgets (nombre,sizeof(nombre),stdin);

    cout <<"hola " << nombre;
    return 0;
    
}