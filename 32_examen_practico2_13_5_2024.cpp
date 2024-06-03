
#include<iostream>
#include<string.h>
using namespace std;


int main (){
    char contra [20] ;
    char  usuario[20] ;
    int intentos = 3;
    int playeras,pantalones;
    int up,ua;
    int totalp; 
    int sutotal;

    while (intentos > 0)
    {
        cout <<"Hola, ingrese su usuario :";
        cin >> usuario;

        cout <<"ingrese su contra :";
        cin >>contra;

        if (strcmp(contra, "Dicarlo292b")==0)
        {
            cout <<"bienvenido al sistema " << usuario << "\n";
            cout <<"ingrese el valor de los pantalones :";
            cin >>pantalones;
            cout <<"ingrese las unidades de pantalones vendidas :";
            cin >>ua;

            cout <<"ingrese el precio de las playeras (el sistema no prara hasta ingresar un 0) :";
            cin >>playeras;
            //el sistema no parara de preguntar hasta que de un 0
            while(up !=0)
            {
                totalp = playeras*up;
                cout <<"ingrese las unidades de playeras que se vendieron :";
                cin >>up;
                
            }
            
            sutotal=pantalones*ua;
            cout <<"el precio total de los pantalones es de :";
            cout << sutotal;
            break;
        }

        else
        {
            cout <<"Datos incorrectos, intentos restantes: "<< intentos--;
        }
    }
    
    if (intentos == 0)
    {
        cout <<"se han agotado los intentos para entrar";
    }
    cout <<"el total de dinero por las playeras es de es de :";
    cout << totalp ;

    
    return 0;

}

