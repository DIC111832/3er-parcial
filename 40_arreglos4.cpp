#include <iostream>
using namespace std;
int main (){
    
    char arreglo1[2];
    int arreglo2[3];
    
    arreglo1[2]= 'fer';
    arreglo2[3]= 'oscar';

    arreglo2[1]=74;
    arreglo2[2]=56;
    arreglo2[3]=10;

    cout << "arreglo 1";
    for(int i=1; i<2 ; ++i)
    {
        cout << "el dato en la posicion "<< i << " es "<< arreglo1[i]<< "\n";

    }

    cout << "arreglo 2";
    for(int i=1; i<3 ; ++i)
    {
        cout << "el dato en la posicion "<< i << " es " << arreglo2[i]<< "\n";
        
    }

    return 0;
}