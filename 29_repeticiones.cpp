#include <iostream>
using namespace std;
int main(){
    int numeros;
    int repeticiones;
    int quintos =0;
    int acum=0;
    cout << "ingrese hasta que numero desea parar el bucle (recuerde que es de 5 en 5) :";
    cin >>repeticiones;

    for(numeros=0; numeros<=repeticiones; numeros++)
    {
        
        cout <<"\n" << acum;
        acum=quintos+=5;
    }
    return 0;

}