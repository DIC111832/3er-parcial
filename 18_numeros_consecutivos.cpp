#include <iostream>
using namespace std;
int main (){
    int n1,n2,n3;
    cout << "ingrese los tres numeros correctos para poder ingresar \n";
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if (n1==1)
    {
        if(n2==2)
        {
            if(n3==3)
            {
                cout << "acceso permitido :D";
            }
        }
    }
    else 
    {
        cout << "acceso denegado >:v";
    }
    return 0;

}