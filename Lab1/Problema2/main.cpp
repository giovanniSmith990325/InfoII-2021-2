#include <iostream>

using namespace std;

int main()
{
    int Bcin= 0, Bvein= 0, Bdiez=0, Bcinco=0, Bdos=0, Bmil=0, Mquin=0, Mdos=0, Mcien=0, Mcincuenta=0, cantidad; // declaración de variables
    cout << "Ingrese la cantidad" << endl;
    cin >> cantidad; // asigna el dato ingresado a la variable cantidad
    if(cantidad >= 50000){ // si cantidad es mayor o igual a 50000, haga lo siguiente
        Bcin = cantidad/50000; // En Bcin guarde el resultado de la división cantidad/50000
        cantidad = cantidad % 50000; // en la variable cantidad, guarde el residuo de la división cantidad/50000
    }
    if(cantidad >= 20000){ // si cantidad es mayor o igual a 20000, haga lo siguiente
        Bvein = cantidad/20000; // En Bvein guarde el resultado de la división cantidad/20000
        cantidad = cantidad % 20000; // en la variable cantidad, guarde el residuo de la división cantidad/20000
    }
    if(cantidad >= 10000){ // si cantidad es mayor o igual a 10000, haga lo siguiente
        Bdiez = cantidad/10000; //En Bdiez guarde el resultado de la división cantidad/10000
        cantidad = cantidad % 10000; // en la variable cantidad, guarde el residuo de la división cantidad/10000
    }
    if(cantidad >= 5000){ //si cantidad es mayor o igual a 5000, haga lo siguiente
        Bcinco = cantidad/5000; //En Bcinco guarde el resultado de la división cantidad/5000
        cantidad = cantidad % 5000; // en la variable cantidad, guarde el residuo de la división cantidad/5000
    }
    if(cantidad >= 2000){ //si cantidad es mayor o igual a 2000, haga lo siguiente
        Bdos = cantidad/2000; //En Bdos guarde el resultado de la división cantidad/2000
        cantidad = cantidad % 2000; // en la variable cantidad, guarde el residuo de la división cantidad/2000
    }
    if(cantidad >= 1000){ //si cantidad es mayor o igual a 1000, haga lo siguiente
        Bmil = cantidad/1000; //En Bmil guarde el resultado de la división cantidad/1000
        cantidad = cantidad % 1000; // en la variable cantidad, guarde el residuo de la división cantidad/1000
    }
    if(cantidad >= 500){ //si cantidad es mayor o igual a 500, haga lo siguiente
        Mquin = cantidad/500; //En Mquin guarde el resultado de la división cantidad/500
        cantidad = cantidad % 500; // en la variable cantidad, guarde el residuo de la división cantidad/500
    }
    if(cantidad >= 200){ //si cantidad es mayor o igual a 200, haga lo siguiente
        Mdos = cantidad/200; //En Mdos guarde el resultado de la división cantidad/200
        cantidad = cantidad % 200; // en la variable cantidad, guarde el residuo de la división cantidad/200
    }
    if(cantidad >= 100){ //si cantidad es mayor o igual a 100, haga lo siguiente
        Mcien = cantidad/100; //En Mcien guarde el resultado de la división cantidad/100
        cantidad = cantidad % 100; // en la variable cantidad, guarde el residuo de la división cantidad/100
    }
    if(cantidad >= 50){ //si cantidad es mayor o igual a 50, haga lo siguiente
        Mcincuenta = cantidad/50; //En Mcincuenta guarde el resultado de la división cantidad/50
        cantidad = cantidad % 50;// en la variable cantidad, guarde el residuo de la división cantidad/50
    }
    cout << "50000:" << Bcin << endl << "20000: " << Bvein << endl << "10000: " << Bdiez << endl << "5000: " << Bcinco << endl << "2000: " << Bdos << endl << "1000: " << Bmil << endl;
    cout << "500: " << Mquin << endl << "200: " << Mdos << endl << "100: " << Mcien << endl << "50: " << Mcincuenta << endl << "Faltante: " << cantidad << endl;
    return 0;
}

