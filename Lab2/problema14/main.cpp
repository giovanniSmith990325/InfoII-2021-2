#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    /*
     * Problema 14:  Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
        imprima la matriz rotada 90, 180 y 270 grados.
    */

    srand(time(NULL));

    int matriz[5][5];

    // Ciclo para llenar la matriz con numeros aleatorios entre 1-25
    cout<<"Matriz original"<<endl;
    for (int i = 0; i < 5 ; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 1+rand()%(26-1);
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    int temp;
    for(int i = 0; i < 5; i++){
        temp = 0;
        for(int j = 4; j >= 0;j--){
            matriz[i][temp] = matriz[j][i];
            temp++;
        }
    }
    cout<<endl<<endl;
    cout<<"Matriz rotada 90°"<<endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }

    for(int i = 0; i < 5; i++){
        temp = 0;
        for(int j = 4; j >= 0;j--){
            matriz[i][temp] = matriz[j][i];
            temp++;
        }
    }
    cout<<endl<<endl;
    cout<<"Matriz rotada 180°"<<endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }

    for(int i = 0; i < 5; i++){
        temp = 0;
        for(int j = 4; j >= 0;j--){
            matriz[i][temp] = matriz[j][i];
            temp++;
        }
    }
    cout<<endl<<endl;
    cout<<"Matriz rotada 270°"<<endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}


