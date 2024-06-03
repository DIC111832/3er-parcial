#include <iostream>
#include<string.h>
using namespace std;

int main (){
    char contra [20] ;
    char  usuario[20] ;
    int intentos = 3;

    while (intentos > 0)
    {
        cout << " \n Hola, ingrese su usuario";
        cin >> usuario;

        cout <<"ingrese su contra";
        cin >> contra;

        if (strcmp(contra, "DIC1118")==0)
        {
            cout <<"Bienvenido al sistema";
            
            break;
        }
        else
        {
            cout <<"contra incorrecta, intentos restantes: "<< intentos--;
        }
    }
    if (intentos == 0)
    {
        cout <<"se han agotado los intentos para entrar";
    }
    return 0;
}