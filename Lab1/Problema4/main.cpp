#include <iostream>

using namespace std;

int main()
{
    int enterohora1, enterohora2, min1, min2, minfinal, horafinal, dias = 0; // Declaración de variables
    bool x,y; //Declaración de variables
    cout << "Ingrese el primer numero: ";
    cin >> enterohora1; //Asigna el dato ingresado a enterohora1
    cout << "Ingrese el segundo numero: ";
    cin >> enterohora2; //Asigna el dato ingresado a enterohora2
    if((enterohora1 > 0 && enterohora1 <= 2400) && (enterohora2 > 0 && enterohora2 <= 2400)){ // Si entero hora 1 es mayor que 0 y menor o igual que 2400 y, además, enterohora2 es mayor que 0 y menor o igual que 2400
        min1 = enterohora1%100; // En min1 guarde el residuo de la división enterohora1/100
        enterohora1 = enterohora1/100; // En enterohora1 guarde el resultado de la división enterohora1/100
        min2 = enterohora2%100; // En min2 guarde el residuo de la división enterohora2/100
        enterohora2 = enterohora2/100; // En enterohora2 guarde el resultado de la división enterohora2/100
        minfinal = min1 + min2; // En minfinal guarde la suma de min1 + min2
        horafinal = enterohora1 + enterohora2; // En horafinal guarde la suma de enterohora1 + enterohora2
        if(minfinal > 60){ // Si minfinal es mayor que 60, haga lo siguiente
            horafinal += minfinal/60; // A horafina súmele el resultado de la división minfinal/60
            minfinal = minfinal%60; // En minfinal guarde el residuo de la división de la división minfinal/60
        }
        if(horafinal > 24){ //Si horafinal es mayor que 24, haga lo siguiente
            dias = horafinal/24; // En dias guarde el resultado de la división horafinal/24
            horafinal = horafinal%24; // EN horafinal guarde el residuo de la división horafinal/24
        }
        cout << "formato día/hora" << endl << dias << "/" << horafinal << minfinal << endl; // Imprime el formato y la cantidad en dias/horasminutos
    }
    else{ // Si no se cumple la condición inicial, haga lo siguiente
        x = enterohora1 < 0 || enterohora1 > 2400; // x es verdadera si enterohora1 es menor que 0 o enterohora1 es mayor que 2400
        y = enterohora2 < 0 || enterohora2 > 2400; // y es verdadera si enterohora2 es menor que 0 o enterohora2 es mayor que 2400
        if(x && y){ // si x y y son verdaderas, haga lo siguiente:
            cout << enterohora1 << " y " << enterohora2 << " son tiempos invalidos" << endl; //Dice que enterohora1 y enterohora2 son inválidos
        }
        else if(x){ // Si lo anterior no se cumple y es es verdadera, haga lo siguiente:
            cout << enterohora1 << " es un tiempo invalido" << endl; //Dice que enterohora1 es un tiempo inválido
        }
        else if(y){ // Si lo anterior no se cumple y es verdadera, haga lo siguiente
            cout << enterohora2 << " es un tiempo invalido" << endl; //Dice que enterohora2 es un tiempo inválido
        }
    }
    return 0;
}

