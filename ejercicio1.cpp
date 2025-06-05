#include <iostream>

using namespace std;

int main(){
    int opcion, pelicula, entradas, tabla, nota1, nota2, nota3, nota4, nota5, nota6, nota7;
    float precio;
    double promedio;

    cout<<"Bienvenido al menu, seleccione una opcion:"<<endl;
    cout<<"Opcion 1, peliculas.\nOpcion 2, tabla de multiplicar.\nOpcion 3, calculadora de promedios.\nOpcion 4, salir."<<endl;
    cin>>opcion;
    switch (opcion){
    case 1:
    cout<<"Elija una pelicula:\n1. Thunderbolts $2.00\n2. Destino final $3.00\n3. Lilo & Stich $4.00\n4. Como entrenar a tu dragon $5.00"<<endl;
    cin>>pelicula;
    switch(pelicula){
        case 1:
        cout<<"ingrese la cantidad de entradas"<<endl;
        cin>>entradas;
        precio=entradas* 2.00;
        cout<<"Selecciono Thunderbolts, ha comprado: "<<entradas<<" Su monto a pagar es de: $"<<precio<<endl;
        break;

        case 2:
        cout<<"ingrese la cantidad de entradas"<<endl;
        cin>>entradas;
        precio=entradas* 3.00;
        cout<<"Selecciono Destino final, ha comprado: "<<entradas<<" Su monto a pagar es de: $"<<precio<<endl;
        break;
        
        case 3:
        cout<<"ingrese la cantidad de entradas"<<endl;
        cin>>entradas;
        precio=entradas* 4.00;
        cout<<"Selecciono Lilo y stich, ha comprado: "<<entradas<<" Su monto a pagar es de: $"<<precio<<endl;
        break;

        case 4:
        cout<<"ingrese la cantidad de entradas"<<endl;
        cin>>entradas;
        precio=entradas* 5.00;
        cout<<"Selecciono Como entrenar a tu dragon, ha comprado: "<<entradas<<" Su monto a pagar es de: $"<<precio<<endl;
        break;
        default:
        cout<<"opcion no valida"<<endl;
    } case 2:
    cout<<"Ingrese un numero"<<endl;
    cin>>tabla;
    cout<<"La tabla de multiplicar es:"<<endl;
    for(int i=1; i<=10, i++;) {
        cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
    }
    break;
    case 3:
    cout<<"Ingrese la nota 1"<<endl;
    cin>>nota1;

      cout<<"Ingrese la nota 2"<<endl;
    cin>>nota2;

      cout<<"Ingrese la nota 3"<<endl;
    cin>>nota3;

      cout<<"Ingrese la nota 4"<<endl;
    cin>>nota4;

      cout<<"Ingrese la nota 5"<<endl;
    cin>>nota5;

      cout<<"Ingrese la nota 6"<<endl;
    cin>>nota6;
      cout<<"Ingrese la nota 7"<<endl;
    cin>>nota7;
    promedio=nota1+nota2+nota3+nota4+nota4+nota6+nota7/7;
    cout<<"El promedio de sus notas es: "<<promedio<<endl;
    break;




    }

    
        
    
    

    return 0;
}