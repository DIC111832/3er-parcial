#include <iostream>
using namespace std;
int main (){
    int f,c,numero,acum;
    int matriz;
    cout << "digite el numero de filas";
    cin >> f;

    cout << "digite el numero de columnas";
    cin >> c;

    int matriz [f,c];
    for (int i=1 ; i<f ; ++i)
    {
        for(int j=1 ; i<c ; ++i)
        {
            cout << "digite datos para la fila "<< i << " columna "<< j;
            cin >> numero;
            matriz[i,j]=numero;
        }
        acum=acum+matriz[i,1];
    }

    for (int i=1 ; i<f ; ++i)
    {
        for(int j=1 ; i<c ; ++i)
        {
            cout <<matriz[i,j];

        }
    }
    cout << "todos los elemntos de la columna suman "<< acum;

}