#include <iostream>
using namespace std;
int main (){
    int capital;
    float interes,total;
    cout << "ingrese el capital que desea ingresar recuerde que el interes es de el 16 porciennto";
    cin >>capital;
    interes = capital* .16;
    cout << "el interes es de :"<< interes;
    cout << " el capital es de :" << capital;
    total = capital + interes;
    cout << "el total a dar es de :" << total;
    return 0; 
}
