
#include <iostream>
using namespace std;
int main (){
    int numero;

    cout << "ingrese el numero de una carta de la baraja española ";
    cin >> numero;

    if(numero==1)
    {
        cout << "es  un as ";
    }
    if(numero==10)
    {
        cout << "es un sota";
    }
    if(numero==11)
    {
        cout << "es un caballo";
    }
    if(numero==12)
    {
        cout << "es un rey";
    }
    if(numero>=13)
    {
        cout << "este numero no es de una carta de  la baraja espanola";
    }
    else if (numero==2 || numero==3 || numero==4 || numero==5 || numero==6 || numero==7 || numero==8 || numero==9 || numero>=14)
    {
        cout << "no es un numero de la baraja espanola";
    }
    

    return 0;
}