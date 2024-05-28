#include <iostream>
using namespace std;
int main (){
    int n;
    char nombre;

    cout << "digite el numero de posiciones";
    cin >> n;

    int personas[n];

    for (int i=0; i<n ;++i)
    {
        cout << "digite un nombre para la posicion " << i << " ";
        cin >> nombre;
        personas[i]=nombre;
    }

    for(int i=0; i<n ; ++i)
    {
        cout << "el dato de la posicion " << i << " es " << personas[i];
        cout << "\n";
    }
}