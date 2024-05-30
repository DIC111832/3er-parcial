#include <iostream>
using namespace std;
int main (){
    int c1,c2,c3;
    int num1,num2,num3;
    int acum3 =0;
    int acum2 =0;
    int acum1 =0;

    cout << "ingrese cuatro numeros para la columna 1 y sumarlos, ";
    for (int i=1; 4>=i; ++i)
    {
        cout << "digite un numero ";
        cin >> num1;
        c1=num1;
        acum1=acum1+c1;
    }

    cout << "ingrese cuatro numeros para la columna 2 y sumarlos, ";
    for (int i=1; 4>=i; ++i)
    {
        cout << "digite un numero ";
        cin >> num2;
        c2=num2;
        acum2=acum2+c2;
    }

    cout << "ingrese cuatro numeros para la columna 3 y sumarlos,  \n";
    for (int i=1; 4>=i; ++i)
    {
        cout << "digite un numero ";
        cin >> num3;
        c3=num3;
        acum3=acum3+c3;
    }

    
    if (acum1>acum2)
    {
        if (acum1>acum3)
        {
            cout << "el numero mayor es "<<acum1<< " de la columna 1";
        }
        else
        {
            cout << "el numero mayor es "<<acum3<< " de la columna 3";
        }
    }
    if (acum2>acum3)
    {
        if (acum2>acum1)
        {
            cout << "el numero mayor es "<<acum2<< " de la columna 2";
        }
        else
        {
            cout << "el numero mayor es "<<acum1<< " de la columna 1";
        }
    }
    if (acum3>acum1)
    {
        if (acum3>acum2)
        {
            cout << "el numero mayor es "<<acum3<< " de la columna 3";
        }
        else
        {
            cout << "el numero mayor es "<<acum2<< " de la columna 2";
        }
    }


    
    

}