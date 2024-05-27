#include <iostream>
using namespace std;
int main (){
    int x,division,division2;
    cout << "ingrese un numero";
    cin >> x;
    division=x&2;
    division2=x&3;

    if(division==0)
    {
    cout << "el numero es par\n";
    }
    if (division2==0)
    {
        cout << "el numero es multiplo de 3\n";
    }
    else 
    {
        cout << "el numero es impar";
    }
    return 0;
}

