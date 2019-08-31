
int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    
    vector<int> lista;
    int num,cont;
    while (true) {
        cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: ";
        cin>>num;
        if (num<0) {
            break;
        }
        cont++
        lista.push_back(num);
    }
    return lista,cont;
}

int mediana(vector<int> &lista,cont) {
    int cont2 = 0,a,mediana;
    
    
    for (i=0;i<=cont;i++){
        cont2++;
    }
    if (cont2%2=0){
        a=i/2;
        mediana=lista[a]+lista[a+1];
    }else{
    a=i/2;
        mediana=lista[a];
    }
    return mediana;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario,cont);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
