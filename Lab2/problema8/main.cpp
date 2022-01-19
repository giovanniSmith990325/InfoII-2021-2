#include <iostream>

using namespace std;

int main()
{
    /* Problema 8: Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
       generando una cadena que no tiene números y otra con los números que había en la cadena original.
    */
    char original[100];
    char numeros[100];
    char texto[100];
    int i = 0;
    int textIndex = 0;
    int numberIndex = 0;

    cout<<"Ingrese una cadena de caracteres: ";
    cin>>original;

    while(original[i] != '\0'){
        if((original[i] >= 48) && (original[i] <= 57)){
            numeros[numberIndex] = original[i];
            numberIndex++;
            i++;
        }else{
            texto[textIndex] = original[i];
            textIndex++;
            i++;
        }
    }

    cout<<"Original: "<<original<<endl;
    cout<<"Texto: "<<texto<<endl;
    cout<<"Numeros: "<<numeros<<endl;

    return 0;
}
