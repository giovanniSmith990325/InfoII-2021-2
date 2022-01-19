#include <iostream>

using namespace std;

int main()
{
    float n, sumatoria = 0, factorial, cantidad; //Declaración de variables
    cout << "Ingrese la cantidad de elementos a usar en la aproximación: ";
    cin >> n; // En la variable n guarda la captura
    for(int i=0; n > 0;i++){ //declara e inicializa la variable i en 0, termina cuando n sea menor o igual que 0, incrementa i de 1 en 1
        factorial = 1; //A la variable factorial le asigna el valor 1
        cantidad = n-1; // En cantidad guarda el resultado de la diferencia n-1
        while(cantidad >= 1){ //Mientras cantidad sea mayor o igual que 1, haga lo siguiente:
        factorial *= cantidad; // Multiplica el valor de factorial por cantidad y el resultado lo asigna a factorial
        cantidad--; // Cantidad - 1
        }
        sumatoria += 1/factorial; // En sumatoria guarda la suma del valor de sumatoria mas el resultado de la division 1/factorial
        n--; // n - 1
    }
    cout << "e es aproximadamente: " << sumatoria << endl; //Imprime el valor aproximado de e
    return 0;
}

