#include <iostream>
using namespace std;
int main (){
    int hora;
    cout << " hola, que hora es?";
    cin >> hora;
    if(hora>12)
    {
        cout << "buenas tardes";
    }
    if (hora<12)
    {
        cout << "buenos dias";
    }
    return 0;
}