#include <iostream>
using namespace std;
int main (){
    int f,c,numero;
    cout << "digite el numero de filas";
    cin >> f;

    cout << "digite el numero de columnas";
    cin >> c;

    int matriz[f,c];
    for (int i=0 ; i<f ; ++i)
    {
        for(int j=0 ; i<c ; ++i)
        {
            cout << "digite datos para la fila "<< i << " columna "<< j;
            cin >> numero;

            matriz[i,j]=numero;

        }
    }

    for (int i=0 ; i<f ; ++i)
    {
        for(int j=0 ; i<c ; ++i)
        {
            cout << "los datos que hay en la matriz son "<< matriz[i,j];

        }
    }
    return 0;
}