#include <iostream>
using namespace std;
int main (){
    int p;
    char nombre(100);
    int posicion;

    cout << "ingrese el numero de paises ";
    cin >> p;

    int paises[p];

    for (int i=0; i<p; ++i)
    {
        cout << " digite un pais ";
        std::cin >> nombre;

        paises[i]=nombre;

    }

    cout << " digite la posicion ";
    cin >> posicion;

    cout << " el pais que hay en la posicion "<< posicion<< " es "<< paises[posicion];
}