#include <iostream>

using namespace std;

int main()
{
    int contador = 0, entero, primo, ban; //Declaración de variables
    cout << "Ingrese el numero entero: ";
    cin >> entero; //Asigna la captura a la variable entero
    for(int i=2;contador <= primo;i++){ //declara e inicializa la variable i en 2, termina cuando contador sea mayor que primo e incrementa la variable i de uno en uno
        ban = 1; // asigna el numero 1 a la variable ban
        if(i<10){ //Si i es menor que 10, haga lo siguiente
            for(int t = 2;t < i; t++){ //Declara e inicializa la variable t en 2, termina cuando t sea mayor que i e incrementa la variable t de uno en uno
                if(i%t==0){ //si el residuo de la división i/t es igual a 0, haga lo siguiente:
                    ban = 0; //Asigna el número 0 a la variable ban
                    break;} //ROmpe el ciclo
            }
        }
        else{ //Sino se cumplió la condición anterior, haga lo siguiente:
            for(int t=2; t<i; t++){ //Declara e inicializa la variable t en 2, termina cuando t sea mayor que i e incrementa la variable t de uno en uno
                if(i%t==0){ //si el residuo de la division i/t es igual a 0, haga lo siguiente:
                    ban = 0; //Asigna el número 0 a la variable ban
                    break;} //Rompe el ciclo
            }
        }
        if(ban==1){ //SI ban es igual a 1, hhaga lo siguiente
            primo = i; //A la variable primo, asígnele el valor de i
            contador++; // contador + 1
        }
        if(contador==entero){ //Si contador es igual a entero, haga lo siguiente
            break; //Rompa el ciclo
        }
    }
    cout << "El primo numero " << entero << " es: " << primo << endl; //Imprime el primo numero n
    return 0;
}

