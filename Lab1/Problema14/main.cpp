#include <iostream>

using namespace std;


int longitud(int lon);

int main()
{
    int Mpalindromo = 10000, operacion, residuo, sumatoria, unidades, ent1, ent2, ban; //Declaración de variables
    for(int i = 999;i > 100;i--){ //Declara e inicializa la variable i en 999, termina cuando i sea menor que 100 y decrementa la variable i de uno en uno
        for(int t = 999;t*i > Mpalindromo;t--){ //Declara e inicializa la variable t en 999, termina cuando t*i sea menor que Mpalíndromo y decrementa la variable i de uno en uno
            if(t < 100){ //Si t es menor que cero, haga lo siguiente
                ban = 0; //Se le asigna el numero 0 a la variable ban
                break; //ROmpe el ciclo
            }
            operacion = t*i; //A operación se le asigna el resultado de t*i
            sumatoria = 0; //A sumatoria se le asigna el número 0
            if(operacion > 99999){ //Si operacion es mayor que 99999, haga lo siguiente
                unidades = 100000;} //A unidades se le asigna 100000
            else{ //SI la condición anterior no se cumple, haga lo siguiente
                unidades = 10000;} //A unidades se le asigna 10000
            while(operacion > 1){ //Mientras operación sea mayor que 1
                residuo = operacion%10; //EN residuo se guarda el residuo de la división operación/10
                operacion = operacion/10; //En operación se guarda el resultado de la división operación/10
                sumatoria += residuo*unidades; //En sumatoria se suma el valor del producto entre residuo y unidades
                unidades /= 10; //En unidades se guarda el valor de unidades /10
            }
            if(sumatoria == (t*i)){ //SI sumatoria es igual al producto entre t*i
                Mpalindromo = t*i; // A Mpalíndromo se le guarda el resultado del producto entre t*i
                ent1 = i; //En ent1 se guarda el valor de i
                ent2= t; // EN ent2 se guarda el valor de t
                ban = 1; //A la variable ban se le asigna el numero 1
                break; //Rompe el ciclo
            }
        }
        if(ban==1){ //Si el valor de la variable ban es igual a 1
            break; //Rompe el ciclo
        }
    }
    cout << ent1 << "*" << ent2 << " = " << Mpalindromo << endl; //Imprime los dos números de 3 cifras que generan el mayor número palíndromo
}








