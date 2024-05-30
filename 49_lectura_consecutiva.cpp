#include <iostream>
using namespace std;
int main (){
    int i=0,num[20],n=0;

    do 
    {
        i++;
        cout << "ingrese el numero " << i << "\n";
        cin >> num [i];


    }while(num [i] !=0  && i !=20);
    cout << "numeros en inverso \n";
    for (int i = 20 ; i>=1 ; i--)
    {
        n++;
        if (num[i]!=0)
        {
            cout << "en el lugar "<< n << " esta el numero "  <<num[i] << "\n";
        }
    }
}
