#include <iostream>
using namespace std;
int main (){
    int area,base,altura;
    cout << "ingrese la medida de la base";
    cin >> base;
    cout << "ingrese la medida de la altura";
    cin >> altura;
    area = (base*altura)/2;
    cout << "el area total de del triangulo rectangulo es de : " << area;
    return 0;
}