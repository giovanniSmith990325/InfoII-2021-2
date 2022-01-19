#include <iostream>

using namespace std;

int main()
{
    /* Problema 12:  Escriba un programa que permita al usuario ingresar una
     * matriz cuadrada, imprima la matriz y verifique si la matriz es un cuadrado mágico.
    */

    int n, numeros, sumatoria=0, sumatoria1=0, ban = 1;

    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;

    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matriz[i][j] = '0';
        }
    }

    // Ciclo para llenar la matriz
    while(true){
        for(int i=0;i<n;i++){
            for(int j=0; j<n;j++){
                cout << "Ingrese un numero en la posicion: " << i << "x" << j << ": ";
                cin >> numeros;
                matriz[i][j] = numeros;
            }
        }
        break;
    }

    // Verifica la sumatoria de las filas
    for(int i=0;i<n;i++){
        sumatoria = 0;
        for(int j=0; j<n;j++){
            sumatoria += matriz[i][j];
        }
        if(sumatoria1==0){
            sumatoria1=sumatoria;
        }
        if(sumatoria1!=sumatoria){
            ban = 0;
            break;
        }
    }

    // Verifica la sumatoria de la columnas
    if(ban==1){
        for(int j=0;j<n;j++){
            sumatoria = 0;
            for(int i=0; i<n;i++){
                sumatoria += matriz[i][j];
            }
            if(sumatoria1!=sumatoria){
                ban = 0;
                break;
            }
        }
    }

    // Verifica la sumatoria de las diagonales principales
    if(ban==1){
        sumatoria = 0;
        int t = n-1;
        for(int i=0; i<n;i++){
            sumatoria += matriz[i][i];
        }
        if((sumatoria)!=sumatoria1){
            ban=0;
        }
        sumatoria = 0;
        for(int i=0; i<n;i++,t--){
            sumatoria += matriz[i][t];
        }
        if(sumatoria!=sumatoria1){
            ban=0;
        }
    }

    cout << endl;

    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            if(matriz[i][j]/104 >= 1){
                cout << matriz[i][j] << " ";
            }
            else{
                cout << " " << matriz[i][j] << " ";
            }
        }
        cout << endl;
    }

    if(ban==1){
        cout << "La matriz es magica" << endl;
    }
    else{
        cout << "La matriz no es magica" << endl;
    }



    return 0;
}
