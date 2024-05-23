#include <iostream>
using namespace std;
#define PI 3.1416
int main () {
    float perimetro;
    float radio;
    cout << " ingrese el radio de el circulo \n";
    cin >> radio;
    perimetro = 2*PI*radio;
    cout << " el perimetro total de el circulo es de :" << perimetro;
    return 0;
}