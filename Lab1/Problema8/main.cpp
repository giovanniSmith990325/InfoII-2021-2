#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int a, b , c, Ma = 0, Mb = 0, sumatoria = 0; //Declaración de variables
    string terminosA="", terminosB = ""; //Declaración de variables
    stringstream intento; //Declaración de variable tipo stringstream
    cout << "Ingrese el numero a: ";
    cin >> a; //En la variable a guarda la captura
    cout << "Ingrese el numero b: ";
    cin >> b; //En la variable b guarda la captura
    cout << "Ingrese el numero c (mayor que a y b): ";
    cin >> c; //En la variable c guarda la captura
    while(a > c || b > c){ //Mientras a sea mayor que c o b sea mayor que c, haga lo siguiente
        cout << "Recuerde que c debe ser mayor que a y b. Intentelo de nuevo: "; //Se exije un número que satisfaga las condiciones
        cin >> c; //EN la variable c guarda la captura
    }
    for(int i=1;Ma < c; i++){ //Declara e inicializa la variable i en 1, termina cuando Ma sea > c, incrementa i de 1 en 1
        intento.str(""); //Borra el contenido de intento
        Ma = a*i; //En Ma guarda el resultado del producto entre a e i
        if(Ma < c){ // Si Ma es menor que c, haga lo siguiente:
            sumatoria += Ma; //En sumatoria guarda el resultado de la suma entre el valor de sumatoria y el valor de Ma
            if(i==1){ //Si i es igual a 1, haga lo siguiente
                intento << Ma; // En intento concatene el valor de Ma (Las variables tipo stringstream tienen esta propiedad)
            }
            else{ //Si no se cumple la condición anterior
                intento << '+' << Ma; // En intento concatene '+' y concatene el valor de Ma
            }
            terminosA += intento.str(); //En terminos A concatene el valor de la variable intento.str() (Las variables string tienen esta propiedad)
        }
    }
    for(int i=1;Mb < c;i++){ //Declara e inicializa la variable i en 1, termina cuando Mb sea mayor que c , incrementa i de 1 en 1
        intento.str(""); //Borra el contenido de intento
        Mb = b*i; // En Mb guarda el resultado del producto entre b e i
        if(Mb%a!=0 && Mb < c){ //Si el residuo de Mb/a es diferente de 0 y Mb es menor que c, haga lo siguiente:
            sumatoria += Mb; //En sumatoria guarda el resultado de la suma entre el valor de sumatoria y el valor de Mb
            intento << '+' << Mb; // En intento concatene '+' y concatene el valor de Mb
            terminosB += intento.str(); //En terminos A concatene el valor de la variable intento.str()
        }   
    }
    cout << terminosA << terminosB << " = " << sumatoria << endl;  //Imprime los terminos de la sumatoria y el resultado de la sumatoria
    return 0;
}
