#include <iostream>

using namespace std;

int main()
{
    /*
     * Problema 6: Escriba un programa que reciba una cadena de caracteres y cambie
     * las letras minúsculas por mayúsculas, los demás caracteres no deben ser alterados.
    */

    char cadena[1000];
    int i = 0;

    cout<<"Ingrese una palabra: ";
    cin>>cadena;

    while(cadena[i] != '\0'){
        if ((cadena[i] >= 97) && (cadena[i] <= 122)){
            cadena[i] -= 32;
            i++;
        }else{
            i++;
        }
    }
    cout<<cadena<<endl;
    return 0;
}
