#include <iostream>
using namespace std;
int main (){
    int p;
    int cont;
    int numero;
    cout << "digite el numero de posiciones (tamano)";
    cin >> p;
    int num[p];
    
    for (int i=0; i<p; ++i)
    {
        cout << "digite un numero";
        cin >> numero;
        num[i]=numero;
    }

    for (int i=0; i<p; ++i)
    {
        
        cout << "los numeros ingresados son "<< num[i]<< "\n";

        if (num[i]>0)
        {
            cont = cont + 1;
        }

    }
    cout << "hay " <<cont << " numeros positivos ";

    return 0;
}