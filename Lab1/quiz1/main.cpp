#include <iostream>
#include <sstream>

using namespace std;

int enesimoPrimo (int);

int main()
{
    int semilla, ingreso, cont, cantidad = 1, copiai; //Declaración de variables
    string  serie; //Declara la variable serie como tipo string
    stringstream  stream; //Declara la variable stream como tipo stringstream
    cout << "Ingrese numero entero: ";
    cin >> ingreso; // EN ingreso guarda la captura
    ingreso = enesimoPrimo(ingreso);
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
    return 0;
}


int enesimoPrimo (int entero){
    int contador = 0, primo, ban;
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


    return primo;
}
