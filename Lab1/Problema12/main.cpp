#include <iostream>

using namespace std;

int main()
{
    int entero, primo = 1, ban, maximo; //Declaración de variables
    cout << "Ingrese el numero entero: ";
    cin >> entero; //Guarda la captura en la variable entero
    for(int i=2;i < entero;i++){ //Declara e inicializa la variable i en 2, termina cuando i sea mayor que entero e incrementa la variable i de uno en uno
        ban = 1; // Le asigna el numero 1 a la variable ban
        if(i<10){ //Si i es menor que diez, haga lo siguiente:
            for(int t = 2;t < i; t++){ //Declara e inicializa la variable t en 2, termina cuando t sea mayor que i e incrementa la variable t de uno en uno
                if(i%t==0){ // si el residuo de la división i/t es 0, haga lo siguiente:
                    ban = 0; //Le asigna el numero 0 a la variable ban
                    break;} //ROmpe el ciclo
            }
        }
        else{ //Si la condición anterior no se cumplió, haga lo siguiente:
            for(int t=2; t<i; t++){ //Declara e inicializa la variable t en 2, termina cuando t sea mayor que i e incrementa la variable t de uno en uno
                if(i%t==0){ //Si el reiduo de la división i/t es 0, haga lo siguiente:
                    ban = 0; //Le asigna el numero 0 a la variable ban
                    break;} //Rompe el ciclo
            }
        }
        if(ban==1){ //Si ban es igual a 1, haga lo siguiente
            primo = i; // A la variable primo, asígnele el valor de la variable i
        }
        if(entero%primo==0){ // Si el residuo de la división entero/primo es igual a 0, haga lo siguiente
            maximo = primo; //a la variable máximo asígnele el valor de la variable primo
        }
    }
    cout << "El mayor factor primo de " << entero << " es " << maximo << endl; //Imprime el mayor factor primo
    return 0;
}

