#include <iostream>

using namespace std;

int main()
{
    int ingreso, triangular, arriba, contador, ban = 1; //Declaración de variables
    cout << "Ingrese el numero k: ";
    cin >> ingreso; // EN la variable ingreso guarda la captura
    for(int i = 1;;i++){ //Declara e inicializa la variable i en 1, no tiene condición de terminación e incrementa la variable i de uno en uno
        contador = 2; //A la variable contador le asigna 2
        triangular = (i*(i+1))/2; //A la variable triangular le asigna el resultado de la operación (i*(i+1))/2
        for(int t = 2;t <= triangular;t++){ //Declara e inicializa la variable t en 2, termina cuando t sea mayor que triangular e incrementa la variable t de uno en uno
            if(triangular%t==0 && ban ==1){ //Si el residuo de la división triangular/t es igual a 0 y ban es igual a 1, haga lo siguiente:
                arriba = triangular / t; //A la variable arriba se le asigna el resultado de la división triangular/t
                contador += 1; // contador + 1
                ban = 0; //A la variable ban se le asigna 0
            }
            else if(triangular%t==0){ //Si no se cumple la condición anterior y el residuo de la división triangular/t es igual a 0, haga lo siguiente:
                contador += 1; //contador + 1
            }
            if(t > arriba){ //Si t es mayor que arriba, haga lo siguiente:
                break; //Rompa el ciclo
            }
        }
        ban = 1; // A la variable ban se le asigna 1
        if(contador > ingreso){//Si contador es mayor que ingreso, haga lo siguiente:
            break; //Rompa el ciclo
        }
    }
    cout << "El numero es: " << triangular << " que tiene " << contador << " divisores."<< endl; //Imprime el resultado
    return 0;
}

