#include <iostream>
using namespace std;
int main (){
    int hora;
    cout << " hola, que hora es?";
    cin >> hora;
    if (hora>=20 && hora < 24)
    {
        cout << "buenas noches";
    }
    if(hora>12 && hora<19)
    {
        cout << "buenas tardes";
    }
    if (hora<12 && hora>1)
    {
        cout << "buenos dias";
    }
    if (hora<1 || hora >25)
    {
        cout << "numero no valido, ingresar otro numero";
    }
    
    return 0;
}
