#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int semilla, ingreso, cont, cantidad = 1, copiai; //Declaración de variables
    string  serie; //Declara la variable serie como tipo string
    stringstream  stream; //Declara la variable stream como tipo stringstream
    cout << "Ingrese el numero: ";
    cin >> ingreso; // EN ingreso guarda la captura
    for(int i = 1; i < ingreso; i++){ //Declara e inicializa la variable i en 1, termina cuando i sea mayor o igual que ingreso e incrementa la variable i de uno en uno
        stream.str(""); //Reinicia el valor de la variable strem
        cont = 0; //En contador guarda el número 0
        copiai = i; //EN copiai guarda el valor de i
        while(copiai > 1){ //Mientras copiai sea mayor que 1, haga lo siguiente:
            if(copiai%2==0){ //Si el residuo de la división copiai/2 es igual a 0, haga lo siguiente:
                copiai /= 2; //EN copiai guarda el valor de la variable copiai/2
                cont++; // cont + 1
            }
            else{ //Si no se cumple la condición anterios, haga lo siguiente
                copiai = (3*copiai)+1; //Copiai igual a 3 veces la variable copiai y al resultado de ese producto le suma 1
                cont++; // cont + 1
            }
            stream << "," << copiai; // EN la variable stream concatena "," y el valor de copiai
        }
        if(cont > cantidad){ //Si cont es mayor que cantidad, haga lo siguiente:
            cantidad = cont; // a cantidad le asigna el valor de cont
            semilla = i; // a semilla le asigna el valor de i
            serie = stream.str(); //A serie le asigna el valor de la variable stream
            serie[0] = ' '; //Cambia el valor de la posición 0 en la variable serie por un espacio
        }
    }
    cout << "La serie mas larga es con la semilla: " << semilla << ":" << serie << ", teniendo " << cantidad << " terminos" << endl;
}
