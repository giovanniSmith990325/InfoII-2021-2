#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    /*Problema 2:  Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
    y luego imprima cuantas veces se repite cada letra en el arreglo.
    */

    char arr[200];
    int counter;
    srand(time(NULL)); // funcion que genera numero aleatorios


    // Ciclo para llenar el arreglo con las 200 letras
    for(int i=0; i<200; i++){
        arr[i] = 65+rand()%(91-65);
        cout<<arr[i];
    }

    cout<<endl;
    cout<<endl;

    // Ciclo para contar cuantas veces aparace cada letra
    for(int j=65; j<=90; j++){
        counter = 0;
        for (int k=0; k<200 ; k++) {
            if(j == arr[k]){
                counter += 1;
            }
        }
        cout<<char(j)<<":"<<counter<<endl;
    }


    return 0;
}
