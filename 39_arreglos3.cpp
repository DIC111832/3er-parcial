#include <iostream>
using namespace std;
int main (){
    int n;
    int numero;

    cout << " digite el tamano del arreglo";
    cin >> n;
    int  num[n];

    for ( int i=0; i<n ; ++i)
    {
        cout << "digite unnumero para la posicion " << i;
        cin >> numero;
        num[i]=numero;

    }

    for (int i=0; i<n ; ++i)
    {
        cout << "el dato  de la posicion "<< i << " es " << num[i];
        cout << "\n";
    }
    return 0;
}