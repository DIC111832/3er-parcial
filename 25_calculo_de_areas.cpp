#include <iostream>
using namespace std;
int main (){
    int figura,area,base,basem,altura;

    cout << "ingrese el numero de la figura que desea calcular (triangulo=1)(rectangulo=2)(trapecio=3) :";
    cin >>figura;
    switch(figura)
    {

        case 1:
        cout <<"ingrese el tamano de la base de del triangulo ";
        cin >>base;
        cout <<"ingrese la altura de el triangulo ";
        cin >>altura;
        area=(base*altura)/2;
        cout <<" el area de el triangulo es de \n" << area;
        break;

        case 2:
        cout <<"ingrese el tamano de la base de del rectangulo ";
        cin >>base;
        cout <<"ingrese la altura de el rectangulo ";
        cin >>altura;
        area=base*altura;
        cout <<" el area de el triangulo es de \n" << area;
        break;

        case 3:
        cout <<"ingrese el tamano de la base mayor de el trapecio ";
        cin >>base;
        cout <<"ingrese el tamano de la base menor de el trapecio ";
        cin >>basem;
        cout <<"ingrese la altura de el ";
        cin >>altura;
        area=((base+basem)/2)*altura;
        cout <<" el area de el triangulo e de \n " << area;
        break;
        return 0;
    }

}