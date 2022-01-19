#include <iostream>

using namespace std;


int stringToNumber(char*);

int main()
{
    /* Problema 4: haga una función que reciba una cadena de caracteres numéricos, la convierta a un número entero
    y retorne dicho número. */

    char cadena[1000];
    char *p;
    int year;

    cout<<"Ingresa tu anio de nacimiento: ";
    cin>>cadena;

    p = cadena;

    year = stringToNumber(p);

    cout<<"Actualmente tienes "<<2022-year<<" anios"<<endl;
    return 0;
}

int stringToNumber(char *p){
    int i = 0;
    int numero = 0;
    int unidades = 1;
    char convertidor;
    int lon = 0;

    while(*(p + i) != '\0'){
        lon += 1;
        i++;
    }

    int index = lon - 1;
    while(index >= 0){
        convertidor = *(p+index);
        numero += (convertidor-48)*unidades;
        unidades *= 10;
        index -= 1;
    }

    return numero;
}

