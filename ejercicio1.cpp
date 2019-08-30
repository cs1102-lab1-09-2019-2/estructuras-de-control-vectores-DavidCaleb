#include <vector>
#include <iostream>
#include <cmath>

float promedio(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola(num) {
    do{
    cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: ";
    cin>>num;
    }while(num >0);
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
}

int promedio(vector<int> &lista) {
    //El promedio es la suma de todos los elementos dividido entre el total de elementos
       int suma = 0;
    for (int i = 0; i < v.size(); i++) {
        suma += v[i];
    }
    return (float)suma/v.size();
}
   
int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<promedio_elemento;
}
